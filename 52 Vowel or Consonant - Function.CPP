#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	clrscr();
	char x,y;
	char vowel(char x);
	printf("\n Input any alphabet");
	x=getche();
	y=vowel(x);
	if (y==1)
		printf("\n %c is Vowel",x);
	else
		printf("\n %c is Consonant",x);
	getch();
}
char vowel(char x)
{
	char y=0;
	char a;
	a=tolower(x);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
		y=1;
	return(y);
}


