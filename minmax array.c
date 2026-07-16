#include<stdio.h>
int main(){
	int i,n;
	
	printf("enter number of elements: ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter elements of array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	
	}
		int min=arr[0];
		int max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
}
printf("largest: %d\n",max);
printf("smallest: %d",min);
}
