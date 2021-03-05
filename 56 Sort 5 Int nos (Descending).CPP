#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[5],i,k,temp;
	printf("\n Input 5 integer nos. = ");
	for(i=4;i>=0;i--)
		scanf("%d",&x[i]);
	for(i=4;i>=0;i--)
	{
		for(k=i-1;k>=0;k--)
		{
			if(x[k]>x[i])
			{
				temp=x[i];
				x[i]=x[k];
				x[k]=temp;
			}
		}
		printf("\n %d",x[i]);
	}
	getch();
}