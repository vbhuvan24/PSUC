#include<stdio.h>
#include<conio.h>
void main()
{
int *ab;
int m;
clrscr();

m=28;

printf("\n--------------------------------------\n");
printf("\nAddress of POINTER : %p",ab);

printf("\n\nValue of m : %d",m);

// Printing the Value of M by using Referencing.

ab=&m;

printf("\n\nValue of : %d ");

printf("\n\nAddress of m : %p");

	getch();

}