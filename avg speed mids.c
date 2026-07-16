#include<stdio.h>
int main()
{
	int distance,time;
	float avg_speed
	printf("enter distance travelled: ");
	scanf("%d",&distance);
	printf("enter the time taken in hours: ");
	scanf("%d",&time);
	avg_speed=distance/time;
	printf("avg speed: %2f",avg_speed);
	return 0;
}
