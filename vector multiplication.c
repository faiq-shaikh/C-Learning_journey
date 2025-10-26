#include<stdio.h>
#include<math.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll number: 25P-0605\n");
	int ax=5,ay=2,az=-3,bx=-4,by=9,bz=2,modA,modB,vector;
	modA=sqrt(pow(ax,2)+pow(ay,2)+pow(az,2));
    modB=sqrt(pow(bx,2)+pow(by,2)+pow(bz,2));
    vector=modA*modB*cos(53);
printf("dot product of a and b is %d",vector);
}
