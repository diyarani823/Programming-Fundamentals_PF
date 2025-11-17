#include <stdio.h>
int main()
{
int n,i;
float sum=0, count =0;
printf("enter input num");
scanf("%d",&n);
int arr[n];
printf("enter %d numbers\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
	if(arr[i]>0)
	sum+=arr[i];
	count++;
}
printf("sum of all +Ve nuum %f ",sum);
if (count>0)
{
	float avg=sum/count;
	printf("avg posive num %f",avg);
}
else {
	printf("not possible");
}
return 0;
}

