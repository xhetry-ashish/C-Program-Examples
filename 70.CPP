#include<stdio.h>
#include<conio.h>
typedef struct
{
	int rn;
	char fname[10];
	char lname[10];
}record;
void main()
{
	void input(record student);
	record student;
	FILE *fpt;
	fpt=fopen("student.dat","w");
	input(student);
	fwrite(&student,sizeof(record),1,fpt);
	fclose(fpt);
}
void input(record student)
{
	printf("\n Roll No.:" );
	scanf("%d",&student.rn);
	printf("\n First Name:");
	scanf("%s",&student.fname);
	printf("\n Last Name:");
	scanf("%s",&student.lname);
}