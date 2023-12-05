//Write C program to convert temperature from degree Celsius to Fahrenheit. (C × 9/5) + 32 = 32°F)

#include<stdio.h>

void main(){
	float c, ans;
	printf("Enter calcious :-");
	scanf("%f",&c);
	ans = (c*9/5)+32;
	printf("convert calcious to ferhanhit :- %.2f",ans);
}
