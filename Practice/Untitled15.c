#include <stdio.h>
int main()
{
int m,n,i,j,countzero=0;
printf("enter num of rows");
scanf("%d",&m);
printf("enter num of cols");
scanf("%d",&n);
int matrix[m][n];
printf("enter elements of matrix");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		scanf("%d",&matrix[i][j]);
		if (matrix[i][j]==0)
		{
			countzero++;
		}
	}
}
printf("the entered matrix is\n");
for (i=0;i<m;i++){
	for(j=0;j<n;j++)
	{
		printf("%d ",matrix[i][j]);
	}
	printf("\n");
}
if (countzero>=m*n/2)
{
	printf("the matrix is sparse");
}
else
{
	printf("the matrix is not sparse");
}
return 0;
}


