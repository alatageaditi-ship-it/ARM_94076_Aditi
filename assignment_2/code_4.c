/*Q4. Left Shift and Right Shift
Write a C program to demonstrate left shift and right shift operations.
uint8_t value = 5;
1. Left shift the value by 2 positions
2. Right shift the original value by 1 position
Print the result after each operation.
Explain how left shift and right shift are related to multiplication and division by powers of 2.
*/
#include<stdio.h>

int main()
{
	unsigned unit8_t_value = 5; // 0000 0101
	printf("Oroginal value : %d ,(binary :0000 0101)\n ", unit8_t_value);
	
	unit8_t_value = unit8_t_value<<2;
	printf("left shifted value by 2 : %d ,(binary : 0001 0100)\n ", unit8_t_value);
		
	unit8_t_value = unit8_t_value>>1;
	printf("rigth shifted value by 1 : %d ,(binary : 0000 0010\n)", unit8_t_value);
}
