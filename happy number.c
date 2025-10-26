#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n!=1 && n!=4){
        while(n>0){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        n=sum;
        sum=0;
    }
    if(n==1)
    printf("%d is a Happy Number",n);
    else
    printf("%d is not a Happy Number",n);
    return 0;
}