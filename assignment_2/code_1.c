/*Q1. Set, Clear and Toggle a Bit
Given an 8-bit unsigned variable:
uint8_t reg = 0x2A; // 0010 1010
Perform the following operations using bitwise operators:
1. Set bit number 4
2. Clear bit number 1
3. Toggle bit number 5
Print the value of reg in hexadecimal and binary after each operation.
*/

#include<stdio.h>

int main()
{
	unsigned unit8_t_reg = 0x2A; //0000 1010
	
	printf("Origional reg value = 0x%X, binary:",unit8_t_reg);
	print_binary(unit8_t_reg);
	
	unit8_t_reg |= (1<<4); //set but no. 4
	printf("After setting the bit 4: reg=0x%X,binary:",unit8_t_reg);
	print_binary(unit8_t_reg);
	
	unit8_t_reg &= ~(1<<1); // clear bit no. 1
	printf("After clearing the bit 1: reg=0x%X,binary:",unit8_t_reg);
	print_binary(unit8_t_reg);
	
	unit8_t_reg ^= ( 1<<5); // toggle bit no. 5
	printf("After toggeling the bit 5: reg=0x%X,binary:",unit8_t_reg);
	print_binary(unit8_t_reg);
}
void print_binary(unsigned char byte)
{
	int i;
    for(i=0;i<=7;i++)
	{
		(byte & (1<<i)) ? printf("1") : printf("0");
	}
	printf("\n");
}

