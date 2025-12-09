#include<stdio.h>
int main()
{
	int n,i;
	printf("enter num of elements");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
			}
			int largest=arr[0],smallest=arr[0];
			for(i=1;i<n;i++)
			{
				if (arr[i]>largest)
				largest=arr[i];
				if (arr[i]<smallest)
				smallest=arr[i];
				
			}
							printf("%d %d", largest, smallest);

}
