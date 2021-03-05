#include<stdio.h>
#include<conio.h>
void main()
{
	int age,exp,edu;
	printf("\n Input age, experience and education in years=");
	scanf("%d%d%d",&age,&exp,&edu);
	if(age>=18 && exp>=2 && edu>=2)
		printf("\n User can apply");
	else
		printf("\n User can't apply");
	getch();
}

