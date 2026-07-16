#include <stdio.h>
int main(){
	printf("Name: Muhammad Faiq Shaikh , Roll# 25P-0605\n");
    int a, b, temp, gcd, lcm, n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    n1=a;    
    n2=b;
    while(b!= 0){
        temp=b;
        b=a%b;
        a=temp;
		}
    gcd=a;
    lcm=(n1*n2)/gcd;
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
}

