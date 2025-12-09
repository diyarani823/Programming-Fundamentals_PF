#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,root1,root2;
printf("enter a");
scanf("%f",&a);
printf("enter b");
scanf("%f",&b);
printf("enter c");
scanf("%f",&c);
float discriminant=b*b-4*a*c;
if(a!=0)
{
	if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
				root2=(-b-sqrt(discriminant)/2*a);
				printf("root 1 is %f and root 2 is %f",root1,root2);

	}
	else if(discriminant==0)
	{
		root1=(-b)/(2*a);
		printf("root 1 is %f",root1);
			}
			else{
				float real,img;
				real=(-b)/(2*a);
				img=(sqrt(-discriminant))/(2*a);
				printf("root 1 is %.2f+%.2f",real,img);
								printf("root 2 is %.2f-%.2f",real,img);

			}
}
}
