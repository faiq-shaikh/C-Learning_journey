#include<stdio.h>
int main()
{int n,i,fact;
	printf("enter a number: ");
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("factorial: %d",fact);
}
