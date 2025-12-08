#include<stdio.h>
void inputsize(int *r1,int *c1,int *r2,int *c2)
{
printf("enter rows and columns of first matrix");
scanf("%d %d",r1,c1);
printf("enter rows and columns of second matrix");
scanf("%d %d",r2,c2);
}
int validatesize(int c1,int r2)
{

if (c1!=r2)
{
	printf("matrix mltiplication not possible");
	return 0;
}
return 1;
}
void inputmatrices(int r1,int c1,int *(mat1)[c1],int r2, int c2, int (*mat2)[c2]){
	int i,j;
	printf("enter elements of first matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",*(mat1+i)+j);
		}
	}
	printf("enter element of 2nd matrix");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",*(mat2+i)+j);
		}
	}
	void multiply(int r1,int c1,int c2,int (*mat1)[c1],int(*mat2)[c2],int(*result)[c2])//diya didnt understood
	{
		int i,j,k,sum;
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++){
				sum=0;
				for (k=0;k<c1;k++)
				{
					sum+=*(*(mat1+i)+k)*(*(*(mat2+k)+j));
				}
				*(*(result+i)+j)=sum;
			}
		}
	}
	void printmatrix(int r1,int c2,int(*result)[c2]){
		int i,j;
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d",*(*(result+i)+j));
			}
			printf("\n");
		}
	}
	int main()
	{
	
	int r1,c1,r2,c2;
	inputsize(&r1,&c1,&r2,&c2);
}
