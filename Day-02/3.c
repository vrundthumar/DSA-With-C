// Write a C program to print 2d array.

#include <stdio.h>
void main() {
	int a[5][5], i, j, rows, cols;
	printf("Enter row and column sizes : ");
	scanf("%d %d", &rows, &cols );
	for (i =0; i<rows ; i++) { 
		for (j=0; j<cols  ; j++  ) { 
			printf("Enter the value of a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]); 
		}
	}
	printf("The given matrix is\n");
	for (i=0; i<rows ; i++ ) { 
		for (j=0 ; j<cols ; j++ ) {
			printf("%d ", a[i][j] );
		}
		printf("\n");
	}
}