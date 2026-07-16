#include<stdio.h>
#include<math.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll number: 25P-0605\n");
	int x1,x2,y1,y2;
	float distance;
	printf("enter x1: ");
	scanf("%d",&x1);
    printf("enter x2: ");
	scanf("%d",&x2);
	printf("enter y1: ");
	scanf("%d",&y1);
	printf("enter y2: ");
	scanf("%d",&y2);
	distance= sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("distance: %f",distance);
}
