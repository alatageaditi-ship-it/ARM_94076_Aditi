#include<stdio.h>
#include<stdlib.h>
void print_binary(int n)
{
	int i;
	for(i=30;i>=0;i--)
	{
		(n& (1<<i)) ? printf("1") : printf("0");
		if(i%4==0)  printf(" ");
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("usage: 5s <number>\n ", argv[0]);
		return 1;
	}
	int num=atoi(argv[1]);
	printf("Binary number of %d is:",num);
	print_binary(num);
	return 0;
}
