#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b,h;
float area;
clrscr();

printf("Enter the breath and height of Triangle :");
scanf("%d%d",&b,&h);

 area = (b*h)/2;

printf("%f",area);

getch();
}