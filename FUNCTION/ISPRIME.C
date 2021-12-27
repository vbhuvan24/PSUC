#include<stdio.h>
#include<conio.h>
int isprime ( int );
void main()
{
	int a;
	int s;
	clrscr();
	printf("Enter any No:");
	scanf("%d",&a);
	s = isprime(a);
	if(s==0)
	{
		printf("Not prime");
	}
	else
	{
		printf("Is Prime ");
	}
	getch();

}
int isprime (int num)
{
	int i;
	for(i=2;i<num;i++)
	{
	       if(num%i==0)
	       {
			return 0;
	       }
	}
	return 1;
}
