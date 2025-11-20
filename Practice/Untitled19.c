#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void countfrequency(int arr[],int size)
{
	int freq[100]={0};
	int i;
	for (i=0;i<size;i++)
	{
		freq[arr[i]]++;
	}
	printf("element\tfrequency\n");
	for(i=0;i<size;i++)
	{
		if(freq[arr[i]]!=0)
		{
			printf("%d\t%d",arr[i],freq[arr[i]]);
			//freq[arr[i]]=0;
		}
	}
}
		int main()
		{
			int i,size;
			printf("enter size of array");
			scanf("%d",&size);
			int arr[size];
			srand (time(0));
			printf("array elements");
			for(i=0;i<size;i++)
			{
				arr[i]=rand()%10;
				printf("%d",arr[i]);
			}
			printf("\n");
			countfrequency(arr,size);
			return 0;
			
		}
		

