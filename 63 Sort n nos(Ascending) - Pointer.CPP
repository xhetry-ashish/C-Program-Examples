#include<stdio.h>
#include<alloc.h>
#include<conio.h>
void main()
{
	clrscr();
	int *x,i,k,temp,n;
	printf("\n How many nos.? \n");
	scanf("%d",&n);
	x=(int *)malloc(n*sizeof(int));
	printf("\n Input %d numbers \n",n);
	for(i=0;i<n;i++)
		scanf("%d",(x+i));
	for(i=0;i<(n-1);i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(*(x+i)>*(x+k))
			{
				temp=*(x+i);
				*(x+i)=*(x+k);
				*(x+k)=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("\n %d",*(x+i));
	getch();
}