#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter number of rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){    //no of rows.
		
		
		for(j=i;j<n;j++){
			printf("*");
		
		}
		for(j=n/2;j>=i/2;j--){
			printf(" ");
		
		}
		for(j=i;j<=n/2;j++){
			printf(" ");
		}
		for(j=1;j<i/2;j++){
			printf("*");
		}
		printf("\n");
	}
}
