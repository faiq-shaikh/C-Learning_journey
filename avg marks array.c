#include<stdio.h>
int main(){
	
	int subject[5],i,sum=0;
	
	printf("enter marks of 5 subjects: ");
	for(i=0;i<5;i++){
		scanf("%d",&subject[i]);
	
		sum+=subject[i];
	}
	
	 float avg=sum/5.0;
	 
	 printf("average: %.2f",avg);
}
