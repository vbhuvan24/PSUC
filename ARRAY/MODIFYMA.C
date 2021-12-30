#include<stdio.h>
#include<conio.h>

void modifyMatrix(int[3][3], int, int);
void main(){
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	clrscr();
	modifyMatrix(a,4,4);
	getch();

}

void modifyMatrix(int a[3][3], int r, int c){
	int i,j,k,b[4][4];

	for(i=0; i<r; i++)
		for(j=0; j<c; j++){
			if((i<r-1) && (j<c-1))
				b[i][j] = a[i][j];
			else if((i==r-1) && (j<c-1)){
				b[i][j] = 0;
				for(k=0; k<r-1; k++)
					b[i][j] += a[k][j];
			}
			else if((i<r-1) && (j==c-1)){
				b[i][j] = 0;
				for(k=0; k<c-1; k++)
					b[i][j] += a[i][k];
			}
			else{
				b[i][j] = 0;
				for(k=0; k<r-1; k++)
					b[i][j] += a[k][k];
			}
		}

		for(i=0; i<4; i++){
			for(j=0; j<4; j++)
				if (b[i][j]<10)
					printf(" %d ", b[i][j]);
				else
					printf("%d ", b[i][j]);
			printf("\n");
		}
}