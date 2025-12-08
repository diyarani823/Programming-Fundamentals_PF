#include<stdio.h>
int main()
{
	int n;
	printf("enter num of rows and columns");
	int matrix[n][n];
	int i,j;
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matrix[i][j]);
	}
}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j&&j>i)
			{
			int temp=matrix[i][j];
			matrix[i][j]=matrix[j][i];
			matrix[j][i]=temp;
		}		
		}
	}
	for (i=0;i<n;i++);
	{
		for(j=0;j<n;j++)
		{
			printf("%d",matrix[i][j]);
		}
	}
}
