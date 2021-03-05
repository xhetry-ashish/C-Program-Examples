#include<stdio.h>
#include<conio.h>
void main()
{
	flushall();
	clrscr();
	struct record
	{
		int rn;
		char fname[10];
		char lname[10];
		char faculty[10];
		char address[10];
		double contact_no;
	};
	struct record student;
	printf("\n Roll No.:");
	scanf("%d",&student.rn);
	printf("\n First Name:");
	scanf("%s",student.fname);
	printf("\n Last Name:");
	scanf("%s",student.lname);
	printf("\n Faculty:");
	scanf("%s",student.faculty);
	printf("\n Address:");
	scanf("%s",student.address);
	printf("\n Contact No.:");
	scanf("%lf",&student.contact_no);
	printf("\n Roll No.: %d",student.rn);
	printf("\n First Name: %s",student.fname);
	printf("\n Last Name: %s",student.lname);
	printf("\n Faculty: %s",student.faculty);
	printf("\n Address: %s",student.address);
	printf("\n Contact No.: %lf",student.contact_no);
	getch();
}