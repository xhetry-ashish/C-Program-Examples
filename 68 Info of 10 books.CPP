#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i;
	typedef struct
	{
		int day;
		int month;
		int year;
	}date;
	typedef struct
	{
		char bookname[10];
		char author[10];
		int bookid;
		char publisher[10];
		int price;
		date submission;
	}lib;
	lib student[10];
	for(i=0;i<3;i++)
	{
		printf("\n Input library record: %d",i+1);
		printf("\n Book Name:");
		scanf("%s",student[i].bookname);
		printf("\n Author:");
		scanf("%s",student[i].author);
		printf("\n Book-Id:");
		scanf("%d",&student[i].bookid);
		printf("\n Publisher:");
		scanf("%s",student[i].publisher);
		printf("\n Price:");
		scanf("%d",&student[i].price);
		printf("\n Submission Date:");
		scanf("%d-%d-%d",&student[i].submission.day,&student[i].submission.month,&student[i].submission.year);
	}
	for(i=0;i<3;i++)
	{
		printf("\n Book Name: %s",student[i].bookname);
		printf("\n Author: %s",student[i].author);
		printf("\n Book Id: %d",student[i].bookid);
		printf("\n Publisher: %s",student[i].publisher);
		printf("\n Price: %d",student[i].price);
		printf("\n Submission Date: %d-%d-%d",student[i].submission.day,student[i].submission.month,student[i].submission.year);
		printf("\n");
		printf("\n *******************");
	}
	getch();
}