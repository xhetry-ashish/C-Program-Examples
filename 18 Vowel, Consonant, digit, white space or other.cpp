 #include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	char x,y;
	printf("\n Input any key");
	x=getche();
	y=toupper(x);
	if(y=='A'||y=='E'||y=='I'||y=='O'||y=='U')
		printf("\n %c is vowel",x);
	else if(y>='A'&&y<='Z')
		printf("\n %c is consonant",x);
   else if(y>='0'&&y<='9')
		printf("\n %c is digit",x);
   else if(y==' '||y=='\t')
		printf("\n %c is white space",x);
   else
		printf("\n %c is other character",x);
	getch();
}
