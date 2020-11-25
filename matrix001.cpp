#include <stdio.h>

int main(){
	int row, column;
	int matrix1[100][100], matrix2[100][100];
	
	//row
	printf("Input row: ");
	scanf("%d", &row);
	
	//column
	printf("Input column: ");
	scanf("%d", &column);
	
	//Matrix 1
	for(int i = 0; i < row; ++i){
		for(int j = 0;j < column; ++j){
			printf("Matrix 1 [%d][%d]: ", i+1, j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	//Matrix 2
	for(int i = 0; i < row; ++i){
		for(int j = 0;j < column; ++j){
			printf("Matrix 2 [%d][%d]: ", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	//Show Addition Matrix
	printf("Matrix addition\n");
	for(int i = 0; i < row; ++i){
		for(int j = 0;j < column; ++j){
			printf("%d\t", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	
	//Show Matrix Subtraction
	printf("Matrix subtraction\n");
	for(int i = 0; i < row; ++i){
		for(int j = 0;j < column; ++j){
			printf("%d\t", matrix1[i][j] - matrix2[i][j]);
		}
		printf("\n");
	}
}
