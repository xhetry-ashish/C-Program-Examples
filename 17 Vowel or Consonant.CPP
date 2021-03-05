#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char x,y;
	printf("\n Input an alphabet");
	x=getche();
	y=toupper(x);
	if(y=='A'||y=='E'||y=='I'||y=='O'||y=='U')
		printf("\n %c is vowel",x);
	else
		printf("\n %c is consonant",x);
	getch();
}
