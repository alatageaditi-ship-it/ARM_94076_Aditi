/*Q2. Check a Bit and Take Decision
Write a C program to check whether bit number 3 of the following variable is SET or CLEAR.
uint8_t status = 0x08;
If bit 3 is set, print:
Bit 3 is SET
Otherwise, print:
Bit 3 is CLEAR
Use only bitwise AND operation for checking.
*/

#include<stdio.h>
int main()
{
	unsigned unit8_t_status = 0x08;
	if(unit8_t_status & (1<<3))
	{
		printf("Bit 3 is set.");
	}
	else
	{
		printf("Bit 3 is clear.");
	}
}
