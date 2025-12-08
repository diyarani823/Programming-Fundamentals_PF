#include<stdio.h>
void inputsize(int *r1,int *c1,int *r2,int *c2)
{
	printf("enter rows and columns of first matrix");
	scanf("%d %d",r1,c1);
		printf("enter rows and columns of second matrix");
	scanf("%d %d",r2,c2);
	}
int validatesize(int c1, int r2)
{
	if(c1!=r2)
	{
		printf("matrix multiplication not possible");
		return 0;
	}
	return 1;
}
void inputmatrix(int r1,int r2,int c1,int c2, int(*mat1)[c1],int(*mat2)[c2])
{
	int i,j;
	printf("enter elements of first matrix");
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",*(mat1+i)+j);
		}
	}

	printf("Enter elements of second matrix");
for (i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",*(mat2+i)+j);
		}
}
		printf("\n");

}
void multiply(int r1,int c1,int c2,int (*mat1)[c1],int(*mat2)[c2],int(*result)[c2])
{
	int i,j,k,sum;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)// what happen if here we write c1 
		{
			sum=0;
			for(k=0;k<c1;k++)// what happen if we write c2 here
			{
				sum+=*(*(mat1+i)+k)* *(*(mat2+k)+j);
			}
			*(*(result+i)+j)=sum;
		}
		printf("\n");
	}
}
void printmatrix(int r1,int c2,int (*result)[c2])
{
	int i,j;
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d", *(*(result+i)+j));
		}
		printf("\n");
	}
}
int main()
{
int r1,c1,r2,c2;
inputsize(&r1,&c1,&r2,&c2);
int mat1[r1][c1];
int mat2[r2][c2];
int result[r1][c2];
inputmatrix(r1,r2,c1,c2,mat1,mat2);
multiply(r1,c1,c2,mat1,mat2,result);
printmatrix(r1,c2,result);
}


