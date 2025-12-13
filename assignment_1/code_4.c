#include<stdio.h>
unsigned char set_even_parity(unsigned char byte)
{
	int count=0;
	unsigned char mask=1;
	int i;
	for(i=0;i<9;i++)
	{
		if(byte&mask)count++;
		mask<<=1;
	}
	if(count%2!=0)
	{
		byte|=0X80;
	}
	return byte;
}
int main()
{
	unsigned char byte;
	printf("Enter byte(0-255):","byte(0-255):");
	scanf("%hhu",&byte);
	printf("Original byte num: %02X\n",byte);
	unsigned char result =set_even_parity(byte);
	printf("byte with even parity :%02X\n",result);
	return 0;
}
