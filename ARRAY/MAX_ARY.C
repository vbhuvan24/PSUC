#include<stdio.h>
#include<conio.h>
void main(){

	int ary[6];
	int i,max;
	clrscr();

printf("Enter the element of Array :\n");
//Input Array Loop
for(i=0;i<6;i++){
	scanf("%d",&ary[i]);
	}
//Checking For Maximum Number
for(i=0;i<6;i++){
	if(max < ary[i]){
		max = ary[i];
		}
	}
printf("Greatest element of array = %d",max);
getch();
}
