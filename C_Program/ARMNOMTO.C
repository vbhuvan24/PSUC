#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,temp,r,temp2,count=0;
int i,m,sum=0;
clrscr();
printf("enter the range in which you want to print armstrong no :");
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
temp=i;
temp2=i;
while(i!=0)
{
count++;
i=i/10;
}
while(temp!=0)
{
r=temp%10;
sum=sum+pow(r,count);
temp=temp/10;
}
if(sum==temp2)
{
printf("%d\n",sum);
}
}
getch();
}