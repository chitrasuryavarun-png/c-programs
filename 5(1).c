#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Temp in Celsius:");
	scanf("%f",&celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("Temperature in Fahrenheit:%.2f",fahrenheit);
	return 0;
}
