#include<stdio.h>
int main()
{
int i,j,temp;
int size=5;
int arr[5]={5,2,9,1,3};
for(i=0;i<size-1;i++)
{
	for (j=0;j<size-i-1;j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
}
printf("sorted array");
for(i=0;i<5;i++)
{
	printf("%d ",arr[i]);
}
return 0 ;
}

