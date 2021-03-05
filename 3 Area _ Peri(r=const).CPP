#include<stdio.h>
#include<conio.h>
#define PI 3.141593
void main()
{
 clrscr();
 float r=2, area, peri;
 area= PI*r*r;
 peri=2*PI*r;
 printf("\n area of circle=%fsq.cm",area);
 printf("\n perimeter of circle=%fcm",peri);
 getch();
}
