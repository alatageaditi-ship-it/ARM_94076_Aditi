#include<stdio.h>
void swap_XOR(int *a, int *b)
{
	printf("Before swapping :a=%d \n, b=%d\n", *a, *b);
	*a= *a^*b;
	*b= *a^*b;
	*a= *a^*b;
	
	printf("after swapping: a=%d \n, b=%d\n", *a, *b);
}
int main()
{
	int a=7,b=3;
	swap_XOR(&a,&b);
	return 0;
}
