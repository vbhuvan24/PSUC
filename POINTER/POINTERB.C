#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7;
	int b=10;
	int *p;
	int *q;

	p=&a;
	q=&b;

	printf("%d",p);
	printf("%d",q);

	getch();

}