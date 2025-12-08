#include<stdio.h>
int main()
{
int i,j,temp;
int arr[5]={5,9,4,5,8};
for(i=0;i<5;i++)
{
	for (j=0;j<4-i;j++)
	if(arr[j]<arr[j+1])
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

