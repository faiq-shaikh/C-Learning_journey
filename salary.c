#include<stdio.h>
int main()
{
	printf("Name: Muhammad Faiq Shaikh   Roll no:25P-0605\n");
	float tax_rate,salary;
	printf("enter tax rate: ");
	scanf("%f",&tax_rate);
    printf("enter salary: ");
    scanf("%f",&salary);
    float tax=salary*(tax_rate/100);
    float net_salary=salary-tax;
    printf("net salary: %.2f",net_salary);
    return 0;
}
