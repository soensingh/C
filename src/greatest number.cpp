#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("1st number:");
	scanf("%d",&a);
	printf("2nd number:");
	scanf("%d",&b);
	printf("3rd number:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d is the greatest number",a);
	}
	if(b>a && b>c)
	{
		printf("%d is the greatest number",b);
	}
	if(c>a && c>b)
	{
		printf("%d is the greatest number",c);
	}
	return 0;
}
