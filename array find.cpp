#include<stdio.h>
int main(){
	int arr[5],i,val,ind;
	
	for( i=0;i<5;i++){
	printf("enter number: ");
	scanf("%d",&arr[i]);	
	}
	printf("enter the value you want to find :");
	scanf("%d",&val);
		ind=-1;
	
	for(i=0;i<5;i++){
		if(arr[i]==val){
			ind=i;
			break;
		}
	}
	if(ind>=0){
	printf("%d found at index %d",val,ind);
	}	
	else{
		printf("not found");
	}
}
