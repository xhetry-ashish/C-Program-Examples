#include<stdio.h>
#include<conio.h>
void main()
{
	int(*x)[3],(*y)[3],(*z)[3];
	int i,k;
	printf("\n Input x-matrix = ");
	for(i=0;i<2;i++)
		for(k=0;k<3;k++)
			scanf("%d",(*(x+i)+k));
	printf("\n Input y-matrix = ");
	for(i=0;i<2;i++)
		for(k=0;k<3;k++)
			scanf("%d",(*(y+i)+k));
	for(i=0;i<2;i++)
	{
		for(k=0;k<3;k++)
		{
			*(*(z+i)+k)=*(*(x+i)+k)+*(*(y+i)+k);
			printf("\t %d",*(*(z+i)+k));
		}
		printf("\n");
	}
	getch();
}