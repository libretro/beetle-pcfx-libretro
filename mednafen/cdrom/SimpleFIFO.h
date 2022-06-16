#ifndef __MDFN_SIMPLEFIFO_H
#define __MDFN_SIMPLEFIFO_H

#include <stdint.h>
#include <vector>

#include "../math_ops.h"

template<typename T>
class SimpleFIFO
{
 public:

 // Constructor
 SimpleFIFO(uint32_t the_size) // Size should be a power of 2!
 {
  data.resize(round_up_pow2(the_size));
  size = the_size;
  read_pos = 0;
  write_pos = 0;
  in_count = 0;
 }

 // Destructor
 INLINE ~SimpleFIFO()
 {

 }

 INLINE void SaveStatePostLoad(void)
 {
  read_pos %= data.size();
  write_pos %= data.size();
  in_count %= (data.size() + 1);
 }

 INLINE uint32_t CanWrite(void)
 {
  return(size - in_count);
 }

 INLINE T ReadUnit(bool peek = false)
 {
  T ret = data[read_pos];

  if(!peek)
  {
   read_pos = (read_pos + 1) & (data.size() - 1);
   in_count--;
  }

  return(ret);
 }

 INLINE uint8_t ReadByte(bool peek = false)
 {
  return(ReadUnit(peek));
 }

 INLINE void Write(const T *happy_data, uint32_t happy_count)
 {
  while(happy_count)
  {
   data[write_pos] = *happy_data;

   write_pos = (write_pos + 1) & (data.size() - 1);
   in_count++;
   happy_data++;
   happy_count--;
  }
 }

 INLINE void WriteUnit(const T& wr_data)
 {
  Write(&wr_data, 1);
 }

 INLINE void WriteByte(const T& wr_data)
 {
  Write(&wr_data, 1);
 }


 INLINE void Flush(void)
 {
  read_pos = 0;
  write_pos = 0;
  in_count = 0;
 }

 //private:
 std::vector<T> data;
 uint32_t size;
 uint32_t read_pos; // Read position
 uint32_t write_pos; // Write position
 uint32_t in_count; // Number of units in the FIFO
};


#endif
