#include<stdio.h>
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	printf("Binary number is :");
	print_binary(num);
}
void print_binary(int n)
{
	int i;
	for(i=30;i>=0;i--)
	{
		(n & (1<<i)) ? printf("1") : printf("0");
		if(i%4==0)printf(" ");
	}
	printf("\n");
	return 0;
}
