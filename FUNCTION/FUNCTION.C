#include<stdio.h>
#include<conio.h>
void main()
{
void swap(int,int);
int x,y;
x=4;
y=5;
printf("Value of x=%d,y=%d",x,y);
swap(x,y);
printf("Value of the Swap x=%d ,y=%d",x,y);
getch();
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
}