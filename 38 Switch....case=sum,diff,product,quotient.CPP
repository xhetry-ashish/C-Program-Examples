#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,a;
	printf("\n Input two integer nos.=");
	scanf("\n %d%d",&x,&y);
	printf("\n1.Add \n2.Subtract \n3.Multiply \n4.Divide");
	printf("\n Select 1 to 4=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			printf("\n Sum=%d",x+y);
			break;
		}
		case 2:
		{
			printf("\n Difference=%d",x-y);
			break;
		}
		case 3:
		{
			printf("\n Product=%d",x*y);
			break;
		}
		case 4:
		{
			printf("\n Quotient=%f",(float)x/y);
			break;
		}
		default:
		{
			printf("\n Error!! Choose 1 to 4 only");
		}
	}
	getch();
}
