#include<stdio.h>
int main()
{
	int minutes;
    float amount = 0.0, tax, total;
    printf("enter the call duration");
    scanf("%d",&minutes);
    if(minutes<=50)
    {
    amount=minutes*1.00;
	}
	else if(minutes<=150){
		amount=50*1.00;
		amount+=(minutes=50)*0.80;
	}
		else if(minutes<=250){
		amount=50*1.00;
		amount=100*0.80;
		amount+=(minutes-150)*0.50;
	}
	else{
		amount=50*1.00;
		amount=100*0.80;
		amount=100*0.50;
		amount+=(minutes-250)*0.30;
	}
	tax=amount*0.12;
	total=amount+tax;
	printf("Base Amount = Rs %f\n", amount);
    printf("Tax (12%%)   = Rs %f\n", tax);
    printf("Total Bill   = Rs %f\n", total);
}
