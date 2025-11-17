#include<stdio.h>
int main()
{
	int rows,col,i,j;
	printf("enter num of rows");
	scanf("%d",&rows);
	printf("enter num of cols");
	scanf("%d",&col);
	int matrix[rows][col];
	printf("enter values of matrix");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("the entered matrix is");
	for (i=0;i<rows;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	int max=matrix[0][0];
	for(i=0;i<rows;i++){
		for(j=0;j<col;j++)
		{
			if (matrix[i][j]>max)
			{ 
			max=matrix[i][j];
			}
		}
	}
	printf("max element in the matrix is %d",max);
	return 0;
}
