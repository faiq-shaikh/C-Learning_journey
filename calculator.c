#include<stdio.h>
int main(){
	printf("Muhammad Faiq shaikh  roll no# 25P-0605\n");
	int a,b;
	char c;
	printf("enter two operands: ");
	scanf("%d %d",&a,&b);
	printf("enter the operator(+ - * /): ");
	scanf(" %c",&c);
	switch(c)
	{
		case'+':
			printf("sum:%d ",a+b);
			break;
		case'-':
			printf("diff:%d ",a-b);
			break;
		case'*':
			printf("prod:%d ",a*b);
			break;
		case'/':
			printf("div:%d ",a/b);
			break;
		default:
			printf("invalid operator");		
	}
}
