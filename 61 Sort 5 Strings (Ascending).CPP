#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char x[5][20]={"Ashwin","Ashim","Ankit","Aashish","Aadarsha"},temp[20];
	int i,k;
	for(i=0;i<5;i++)
	{
		for(k=i+1;k<5;k++)
		{
			if(strcmpi(x[i],x[k])>0)
			{
				strcpy(temp,x[i]);
				strcpy(x[i],x[k]);
				strcpy(x[k],temp);
			}
		}
	{
	printf("\n The strings are %s",x[i]);
	}
	}
	getch();
}
