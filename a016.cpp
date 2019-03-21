#include<stdio.h>
#define SIZE 9
int checkrow(const int rsudoku[][9]);
int checkcolumn(const int csudoku[][9]);
int checksquare(const int ssudoku[][9]);

int i, j, k, l;

int checkrow(const int rsudoku[][9])
{
	int judgevalue=1;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			k=j+1;
			while(k<SIZE){
				if(rsudoku[i][j]==rsudoku[i][k]){
					judgevalue=0;
					break;
				}
				else{
					k++;	
				}
			
			}
		}
		
	}
	return judgevalue;
}

int checkcolumn(const int csudoku[][9])
{
	int judgevalue=1;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			k=j+1;
			while(k<SIZE){
				if(csudoku[j][i]==csudoku[k][i]){
					judgevalue=0;
					break;
				}
				else{
					k++;	
				}
			
			}
		}
		
	}
	return judgevalue;	
}




int checksquare(const int ssudoku[][9])
{
	int judgevalue=1, lengthForRow=3, lengthForColumn=3;//lengthForColumn and lengthForRow are the variables for the 
	int k=0, l=0, i=0, j=0;//i, j are the indexes for the loop of the compared indice, and k, l are the loop for the comparing values. 	

	 
		start:
		for(i;i<lengthForRow;++i){
			for(j;j<lengthForColumn;++j){
			
				//switch to next line when the indice is the end of a row in the square. 	
				if(j==lengthForColumn-1){
					k=i+1;
					l=0;
				}
				else{
					k=i;
					l=j+1;
				}
				
				for(k;k<lengthForRow;++k){
					while(l<lengthForColumn){
						if(ssudoku[i][j]==ssudoku[k][l]){
							judgevalue=0;
							return judgevalue;
						}
						else{
							l++;
						}
					}
					l=0;
				}
			
		    }  
		} 
		
		end: 
		if(lengthForColumn==SIZE){
			if(lengthForRow==SIZE){
				return judgevalue;//if it is now the last square, return the judge value. 
			}
			else{
				lengthForColumn=3;
				lengthForRow+=3;
				i=lengthForRow-3, j=0;//change to the next row of squares.
				goto start; 
			}
		}
		else{
			lengthForColumn+=3;//remain same row of block but move to the right column of blcok.
			j=lengthForColumn-3; 
			goto start;
		}
	
	
}


int main(void)
{
	int sudoku[SIZE][SIZE];
	int rowCheck, columnCheck, squareCheck;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			sudoku[SIZE][SIZE]=0; 
		}
	}
	
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			scanf("%d", &sudoku[i][j]);
		}
	}
	
	rowCheck=checkrow(sudoku);
	columnCheck=checkcolumn(sudoku);
	squareCheck=checksquare(sudoku);
	
	if(rowCheck==1&&columnCheck==1&&squareCheck==1){
		puts("yes");
	}
	else{
		puts("no");
	}
	return 0;
}

