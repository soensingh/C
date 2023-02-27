#include<stdio.h>
#include<conio.h>
main()
{
	float a,b;
	//Conversion of temperature from Celsius to Fahrenheit
	printf("Temperature in Celsius = ");
	scanf("%f",&a);
	b=(a*9/5)+32;
	printf("Temperature in Fahrenheit = %.2f",b);
}
