#include<stdio.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll no:25P-0605\n");
	int num1,num2,temp;
	printf("enter num1: ");
	scanf("%d",&num1);
	printf("enter num2: ");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nafter swapping the values: \n\n");
	printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);
    return 0;
}
