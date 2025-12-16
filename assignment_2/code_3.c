/*Q3. Masking – Extract Bits 
Given a 16-bit register value:
uint16_t reg = 0xABCD;
Perform the following tasks:
1. Extract the lower 4 bits
2. Extract the upper 4 bits of the lower byte
Print the extracted values in hexadecimal format.
*/

#include<stdio.h>
#include<stdint.h>
int main()
{
	uint16_t reg= 0xABCD;
	uint16_t lower_4_bits = reg & 0x000F;
	uint16_t upper_4_bits_lower_byte = (reg& 0x00F0)>>4;
	
	printf("lower 4 bits : 0x%X \n ",lower_4_bits);
	printf("upper 4 bits of lower byte: 0x%X \n ",upper_4_bits_lower_byte);
	return 0;
}
