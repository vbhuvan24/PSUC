#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
unsigned long fact=1;
clrscr();

printf("Enter Any Positive Value :");
scanf("%d",&n);

for(i=1;i<=n;++i){
	fact *= i;
	}

printf("Factorial of %d! = %llu",n ,fact);

getch();
}