#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	if(i==1)
	{
		printf("ONE");
	}
	if(i==2)
	{
		printf("TWO");
	}
	if(i==3)
	{
		printf("THREE");
	}
	if(i==4)
	{
		printf("FOUR");
	}
	if(i==5)
	{
		printf("FIVE");
	}
	if(i==6)
	{
		printf("SIX");
	}
	if(i==7)
	{
		printf("SEVEN");
	}
	if(i==8)
	{
		printf("EIGHT");
	}
	if(i==9)
	{
		printf("NINE");
	}
else if(i>9)
	{
		if(i%2==0)
		{
			printf("even");
		}
		else {
			printf("odd");
		}
		
	}
}
