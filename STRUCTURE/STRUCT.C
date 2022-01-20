#include<stdio.h>
#include<conio.h>

struct{
	char firstName[50];
	int roll;
	int marks;
      }s[5];

void main() {
	int i;
	clrscr();
	printf("Enter information of students:\n");

	for( i=0; i<5; i++) {
		s[i].roll = i + 1;
		printf("\nFor roll number %d \n" ,s[i].roll);
		printf("Enter first name : ");
		scanf("%s", s[i].firstName);
		printf("Enter marks : ");
		scanf("%d", &s[i].marks);
		}
		printf("Display Information : \n\n");

		for(i=0; i<5; ++i){
			printf("\nRoll number: %d\n", i + 1);
			printf("First name : ");
			puts(s[i].firstName);
			printf("Marks: %.1f",s[i].marks);
			printf("\n");
			}
			getch();
		}


