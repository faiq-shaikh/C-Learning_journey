#include<stdio.h>
int main(){
    int square,sum=0;
for(int i=1;i<=10;i++)
{
    square=i*i;
    printf("square of %d :%d\n",i,square);
    sum=sum+square;
}
printf("sum: %d",sum);
}