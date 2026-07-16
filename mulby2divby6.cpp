#include<stdio.h>
int main()
{
    int n,count=0;
   scanf("%d",&n);
        while (n!=1)
        {
		if(n%6==0){
			n/=6;
		}
		else{
			n*=2;
		}
		count++;
		}
             printf("%d\n",count);
        
    }
