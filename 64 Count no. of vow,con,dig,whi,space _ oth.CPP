#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
clrscr();
	char x[80];
	void count(char x[],int *vow,int *con,int *dig,int *whi,int *oth);
	int i;
	int vow=0,con=0,dig=0,whi=0,oth=0;
	printf("\n Input a string");
	for(i=0;(x[i]=getchar())!='\n';i++)
	;
	count(x,&vow,&con,&dig,&whi,&oth);
	printf("\n vowel=%d \n consonant=%d \n digit=%d \n white space=%d \n other=%d",vow,con,dig,whi,oth);
	getch();
}
void count(char x[],int *vow,int *con,int *dig,int *whi,int *oth)
{
	int i=0;
	char y;
	while((y=toupper(x[i]))!='\0')
	{
		if(y=='A'||y=='E'|| y=='I'||y=='O'||y=='U')
			++*vow;
		else if(y>='A'&&y<='Z')
			++*con;
		else if(y>='0'&&y<='9')
			++*dig;
		else if(y==' '||y=='\t')
			++*whi;
		else
		       *oth++;
		i++;
	}
}