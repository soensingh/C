#include<stdio.h>
#include<conio.h>
/*table for Fahrenheit-Celsius 
for F-0,20,40,-----,300*/
main()
{
	int F,C;
	int a,b,c;
	a=0;
	b=300;
	c=20;
	
	F=a;
	while (F<=b)
	{
		F=(C-32)*5/9;
		printf("%d\t%d\n",F,C);
		F=F+c;
	}
}
