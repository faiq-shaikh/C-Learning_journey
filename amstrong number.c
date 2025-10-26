#include<stdio.h>
#include<math.h>
int main()
{
    int num,originalnum,remainder,n=0;
    float result;
    printf("enter a number: ");
    scanf("%d",&num);
    originalnum=num;
    for(int temp=num;temp!=0;temp/=10)
    {
        n++;
    }
    for(int temp=num;temp!=0;temp/=10)
    {
        remainder=temp%10;
        result+= pow(remainder,n);
    }
    if((int)result==originalnum)
    {
        printf("%d is Amstrong Number",originalnum);}
        else{
            printf("%d is not Amstrong Number",originalnum);
        }
        return 0;
    }