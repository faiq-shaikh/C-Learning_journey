#include <stdio.h>
int main(){
	printf("Name: Muhammad Faiq Shaikh , Roll# 25P-0605\n");
    int a=1,b=1,i;
    long long int sum=0,c;
    printf("first 30 fibonacci numbers:\n");
    printf("%d %d",a,b);
    for (i =3;i<=30;i++){
        c=a+b;
        a=b;
        b=c;
        printf(" %d ",c);
        if(c%3==0||c%5==0||c%7==0){
		sum+=c;
}
      
    }

    printf("\n\nSum of fibonacci numbers divisible by 3 5 or 7 : %d",sum);
    return 0;
}

