#include<stdio.h>
#include<conio.h>
void main(){
	int ary[10];
	int i;
	int min;
printf("Enter the Elements of Array :");
for(i=0;i<10;i++){
	scanf("%d",&ary[i]);
	}
for(i=0;i<10;i++){
	if(min > ary[i]){
	min = ary[i];
	}
}
printf("Minimun Number in Array Element is : %d",min);
getch();
}