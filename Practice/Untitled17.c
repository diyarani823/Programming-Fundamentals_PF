#include<stdio.h>
int main()
{
	int n,i,j,symmetric=1;
	printf("enter the size of square matrix\n");
	scanf("%d",&n);
	int A[n][n],T[n][n];
	printf("enter elements of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			T[j][i]=A[i][j];
		}
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			if (A[i][j]!=T[j][i]) // try uusing t[j][i]
			{
				symmetric=0;
				break;
			}
		}
		if (!symmetric)
		break;
	}
	printf("original matrix is\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",A[i][j]);
		}
	printf("\n");
}
printf("transpose of matrix");
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++){
		printf("%d",T[i][j]);
	}
	printf("\n");
	}
	if(symmetric)
	{
		printf("matric is symmetric");
		
		}
		else{
			printf("matrix is asymmetric");
		}
		return 0;	
	}
	
