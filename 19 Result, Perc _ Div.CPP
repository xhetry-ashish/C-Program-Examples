#include<stdio.h>
#include<conio.h>
void main()
{
	float phy,maths,comp,total,perc,div,full=300;
	printf("\n Input marks of 3 subjects");
	scanf("%f%f%f",&phy,&maths,&comp);
	total=phy+maths+comp;
	perc=total/full*100;
	printf("\n Total=%f",total);
	printf("\n Percentage=%f percent",perc);
	if(perc>=80)
		printf("\n Distinction");
	else if(perc>65)
		printf("\n First Division");
	else if(perc>45)
		printf("\n Second Division");
	else if(perc>40)
		printf("\n Third Division");
	else
		printf("\n Fail");
	getch();
}

