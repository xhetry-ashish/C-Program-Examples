#include<stdio.h>
#include<conio.h>
void main()
{
	float C,F;
	printf("\n Input temperature in celsius");
	scanf("%f",&C);
	F=1.8*C+32;
	printf("\n Temperature in Fahrenheit=%f",F);
	getch();
}