#include <stdint.h>
#include <string.h>
#include "math_ops.h"
#include "MemoryStream.h"

#ifdef _XBOX
#ifndef SIZE_MAX
#define SIZE_MAX _UI32_MAX
#endif
#endif

/*
 TODO:
	Write and Seek expansion that fail should not corrupt the state.

	Copy and assignment constructor fixes.
*/

// TODO 128-bit integers for range checking?


MemoryStream::MemoryStream() : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
 data_buffer_size = 0;
 data_buffer_alloced = 64;
 data_buffer = (uint8_t*)realloc(data_buffer, data_buffer_alloced);
}

MemoryStream::MemoryStream(uint64_t size_hint) : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
 data_buffer_size = 0;
 data_buffer_alloced = (size_hint > SIZE_MAX) ? SIZE_MAX : size_hint;

 data_buffer = (uint8_t*)realloc(data_buffer, data_buffer_alloced);
}

MemoryStream::MemoryStream(Stream *stream) : data_buffer(NULL), data_buffer_size(0), data_buffer_alloced(0), position(0)
{
   if((position = stream->tell()) != 0)
      stream->seek(0, SEEK_SET);

   data_buffer_size = stream->size();
   data_buffer_alloced = data_buffer_size;
   data_buffer = (uint8_t*)realloc(data_buffer, data_buffer_alloced);

   stream->read(data_buffer, data_buffer_size);

   stream->close();
   delete stream;
}

MemoryStream::MemoryStream(const MemoryStream &zs)
{
 data_buffer_size = zs.data_buffer_size;
 data_buffer_alloced = zs.data_buffer_alloced;
 data_buffer = (uint8_t*)malloc(data_buffer_alloced);

 memcpy(data_buffer, zs.data_buffer, data_buffer_size);

 position = zs.position;
}

MemoryStream::~MemoryStream()
{
 if(data_buffer)
 {
  free(data_buffer);
  data_buffer = NULL;
 }
}

uint8_t *MemoryStream::map(void)
{
 return data_buffer;
}

void MemoryStream::unmap(void)
{

}


INLINE void MemoryStream::grow_if_necessary(uint64_t new_required_size)
{
 if(new_required_size > data_buffer_size)
 {
  if(new_required_size > data_buffer_alloced)
  {
   uint64_t new_required_alloced = round_up_pow2(new_required_size);
   uint8_t *new_data_buffer;

   // first condition will happen at new_required_size > (1ULL << 63) due to round_up_pow2() "wrapping".
   // second condition can occur when running on a 32-bit system.
   if(new_required_alloced < new_required_size || new_required_alloced > SIZE_MAX)
    new_required_alloced = SIZE_MAX;

   new_data_buffer = (uint8_t*)realloc(data_buffer, new_required_alloced);

   //
   // Assign all in one go after the realloc() so we don't leave our object in an inconsistent state if the realloc() fails.
   //
   data_buffer = new_data_buffer;
   data_buffer_size = new_required_size;
   data_buffer_alloced = new_required_alloced;
  }
  else
   data_buffer_size = new_required_size;
 }
}

uint64_t MemoryStream::read(void *data, uint64_t count)
{
   if(count > data_buffer_size)
      count = data_buffer_size;

   if((uint64_t)position > (data_buffer_size - count))
      count = data_buffer_size - position;

   memmove(data, &data_buffer[position], count);
   position += count;

   return count;
}

void MemoryStream::write(const void *data, uint64_t count)
{
 uint64_t nrs = position + count;

 grow_if_necessary(nrs);

 memmove(&data_buffer[position], data, count);
 position += count;
}

void MemoryStream::seek(int64_t offset, int whence)
{
 int64_t new_position;

 switch(whence)
 {
    case SEEK_SET:
       new_position = offset;
       break;

    case SEEK_CUR:
       new_position = position + offset;
       break;

    case SEEK_END:
       new_position = data_buffer_size + offset;
       break;
 }

 if(new_position >= 0)
  grow_if_necessary(new_position);

 position = new_position;
}

uint64_t MemoryStream::tell(void)
{
 return position;
}

uint64_t MemoryStream::size(void)
{
 return data_buffer_size;
}

void MemoryStream::close(void)
{

}

void MemoryStream::truncate(uint64_t length)
{
}


int MemoryStream::get_line(std::string &str)
{
 str.clear();	// or str.resize(0)??

 while(position < data_buffer_size)
 {
  uint8_t c = data_buffer[position++];

  if(c == '\r' || c == '\n' || c == 0)
   return(c);

  str.push_back(c);	// Should be faster than str.append(1, c)
 }

 return(-1);
}

void MemoryStream::flush(void)
{
}
