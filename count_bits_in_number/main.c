#include <stdio.h>
#include <stdint.h>


int count_bits_set_in_byte(uint8_t data) {
  int count = 0;
  int i, data1;
  for(i=0; i<=7; i++)
  {
    data1 = data >> i;
    if(data1 & 1)
    {
      count++;
    }
  }
  return count;
}


int main() {
	printf("0x01:%d\n", count_bits_set_in_byte(1));
  printf("0x03:%d\n", count_bits_set_in_byte(3));
  printf("0x08:%d\n", count_bits_set_in_byte(8));
  printf("0x4F:%d\n", count_bits_set_in_byte(0x4F));
  printf("0xAA:%d\n", count_bits_set_in_byte(0xAA));
  printf("\n\n");
    
	return 0;
}