#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char x[8][20]={"Kathmandu","Bhaktapur","Lalitpur","Dhading","Rasuwa","Nuwakot","Kavre"};
	char y[20];
	int i;
	printf("\n Input a district = ");
	scanf("\n %[^\n]",y);
	for(i=0;i<8;i++)
	{
		if(strcmpi(x[i],y)==0)
		{
			printf("It exists");
			goto xy;
		}
	}
	printf("It doesn't exist");
	xy:
	getch();
}