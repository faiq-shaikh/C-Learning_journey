#include<stdio.h>
#include<math.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll no:25P-0605\n");
	int a,b,c,x,y,d;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
	printf("enter value of c: ");
	scanf("%d",&c);
	d=b*b-4*a*c;
	x=(-b+sqrt(d))/2*a;
    y=(-b-sqrt(d))/2*a;
    printf("root 1: %d\n",x);
    printf("root 2: %d",y);
    return 0;
}
