#include<stdio.h>
int count_ones(int n){
	int count=0;
	while(n){
		count+=n&1;
		n>>=1;
	}
	return 0;
}
int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Number of '1' bits: %d\n", count_ones(num));
}
