/*
Q5. Read and Write Bit Field
Given an 8-bit register:
uint8_t reg = 0xAA; // 1010 1010
1. Read the value of bits from bit 2 to bit 4
2. Write the value 0b011 into bits 2 to 4 without changing other bits
Print the register value before and after modification
*/

#include<stdio.h>
#include<stdint.h>
int main(void)
{
	int i;
	uint8_t reg = 0xAA; 
	printf("Original value : 0x%02X, binary : ", reg);
	print_binary(reg);
	printf("\n");
	
	uint8_t read_bits= (reg>>2) & 0X07;
	printf("bits 2 to 4 value :0b");
	for(i=0;i<=2;i++)
	{
		printf("%d",(read_bits>>i) &1);
		}	
		printf("\n");
		
		reg &= ~(0x07<<2);
		reg |=(0x03<<2);
		
		printf("Modified value : 0x%02X , binary :" ,reg);
		print_binary(reg);
	    printf("\n");
	
		return 0;
}
void print_binary(uint8_t val)
{
	int i;
    for(i=0;i<=7;i++)
	{
		printf("%d",(val>>i) & 1);
	}
}

