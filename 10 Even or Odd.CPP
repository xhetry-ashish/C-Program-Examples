#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	int x;
	printf("\n Input a number");
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is even",x);
	else
		printf("%d is odd",x);

	getch();
}
