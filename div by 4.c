#include<stdio.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll number: 25P-0605\n");
	int a,b;
	printf("enter a number: ");
	scanf("%d",&a);
	printf("enter another number: ");
	scanf("%d",&b);
	int c=a&b;
	int d=c>>2;
	printf("output: %d",d);
}
