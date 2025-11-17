#include <stdio.h>

int main() {
	int matrix[2][2],transpose[2][2],row,col;
	printf("enter value of matrix");
	for (row=0;row<2;row++)
	for(col=0;col<2;col++){
	printf("enter element a[%d][%d]",row,col);
	scanf("%d",&matrix[row][col]);
       }
       printf("entered matrix");
       for(row=0;row<2;row++)
       for(col=0;col<2;col++)
       {
       	printf("%d",matrix[row][col]);
       	if(col==1)
       	printf("\n\n");
	   }
}
