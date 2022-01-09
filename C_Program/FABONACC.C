#include<stdio.h>
#include<conio.h>
void main()
{
int n1 = 0 ,n2 = 1,nextterm = 0;
int i ,n ;
clrscr();

scanf("%d",&n);
printf("Fabonnaci Series : %d, %d,",n1 ,n2);
nextterm = n1 + n2 ;

while(nextterm <= n){
 printf(" %d,",nextterm);
 n1 = n2;
 n2 = nextterm;
 nextterm = n1 + n2;
}
getch();
}