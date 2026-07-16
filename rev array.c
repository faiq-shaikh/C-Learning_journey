#include<stdio.h>
int main(){
	printf("Name: Muhammad Faiq Shaikh , Roll# 25P-0605\n");
    int n,i;
    printf("Enter number of elements u want to store in array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Array in reverse order:");
    for(i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}

