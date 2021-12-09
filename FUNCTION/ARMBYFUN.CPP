#include<stdio.h>
#include<conio.h>
#include<math.h>
int gin(int);
void main()
{ int isarm(int);

  int n,a;
  clrscr();
  printf("enter the no");
  scanf("%d",&n);
  a=isarm(n);
  if(a==1)
  printf("no is armstrong");
  else
  printf("no is not armstrong");
  getch();
}
int isarm(int a)
{
	int sum=0,c,b;
	b=a;
	c=gin(a);
 while(a>0)
 { int r=a%10;
  sum=sum+pow(r,c);
  a=a/10;
  }
 if(sum==b)
 return(1);
 else
 return(0);
 }
 int gin(int a)
 { int c=0;
  while(a>0)
  { a=a/10;
    c++;
    }
   return(c);
   }