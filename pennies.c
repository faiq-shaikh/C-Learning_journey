#include<stdio.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll no:25P-0605\n");
	int remaining, pennies=368,dime,nickle,quarter,remaining2,remaining3;
	quarter=pennies/25;
	remaining=pennies%25;
	dime=remaining/10;
	remaining2=remaining%10;
	nickle=remaining2/5;
	remaining3=remaining2%5;
	printf("quarter: %d\n",quarter);
	printf("dime: %d\n",dime);
	printf("nickle: %d\n",nickle);
	printf("Remaining Pennies: %d",remaining3);
	return 0;
}
