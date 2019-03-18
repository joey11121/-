#include<stdio.h>

int main()
{	
	int row, column, swap;
	while(scanf("%d %d",&row,&column)!=EOF){
	
		int i,j;//index for the loop of row and column
		int matrix[row][column];
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				matrix[i][j]=0;
			}
		}
		for(i=0;i<row;i++){
			for(j=0;j<column;j++){
				scanf("%d", &matrix[i][j]);
			}
		}


		for(i=0;i<column;i++){
			for(j=0;j<row;j++){
				printf("%d ", matrix[j][i]);
			}
			puts("");
		}
	}
	
	return 0;
} 
