#include<stdio.h>
int main()
{
	float sum=0.0;
	int denominator=1;
	while (denominator<=400)
	{
		sum=sum+(1.0/denominator);
		if (denominator==1)
		{
			denominator=4;
		}
		else 
		denominator= denominator+4;
	
	}
	printf("sum is %0.2f",sum);
	return 0;
}
