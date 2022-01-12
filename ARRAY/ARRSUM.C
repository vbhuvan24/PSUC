#include<stdio.h>
#include<conio.h>
void main()
{
int salary[10];
int i, sum = 0;
clrscr();

printf("Enter the Salary of Employee :\n");
//Input array
for(i=0;i<10;i++){
	scanf("%d",&salary[i]);
}
//Output array
printf("Output array :\n");

for(i=0;i<10;i++)
{
	printf("%d ",salary[i]);
}
//printf("%d",salary[]);
//Sum of Array
for(i=0;i<10;i++)
{
	sum = sum + salary[i] ;
}
printf("\nSum of Array is %d",sum);
getch();
}