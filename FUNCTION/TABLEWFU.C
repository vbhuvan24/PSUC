   /* TABLE */

    //CODE//

#include<stdio.h>
void table(int);

int main()
{
int num;
printf("Enter a positve number\n");
scanf("%d",&num);
printf("\n multiplication Table for %d is :\n",num);

table(num);

return 0;
}
void table (int num)
{
int count ;

for(count=1;count <= 10;count++)
{
printf("%d x%d=%d\n",num,count ,num*count);
}
}
