#include<stdio.h>
int main()
{
	Printf("Name: Muhammad Faiq Shaikh , Roll# 25P-0605");
	int i,n1,n2,fizz=0,buzz=0,fizzbuzz=0;
	printf("enter starting and ending number: ");
	scanf("%d %d",&n1,&n2);
	for (i=n1;i<=n2;i++)
	{
		 if(i%3==0)
		 fizz++;
		 if(i%5==0)
		 buzz++;
		 if(i%3==0&&i%5==0)
		 fizzbuzz++;
	}
	printf("fizz: %d\n",fizz);
	printf("buzz: %d\n",buzz);
	printf("fizzbuzz: %d\n",fizzbuzz);
}
