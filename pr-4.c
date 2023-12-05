//Write C Program to find gross salary.
//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.

#include<stdio.h>

void main(){
	float Salary,basic, hra, da, ta;
	printf("Enter Basic Salary :- ");
	scanf("%f", &basic);
	
	hra = basic * 10/100;
	da = basic * 5/100;
	ta = basic * 8/100;
	
	Salary = basic + hra + da + ta;
	
	printf("Gross Salary :- %.2f", Salary);
}
