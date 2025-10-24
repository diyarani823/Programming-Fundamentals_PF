#include<stdio.h>
int main()
{
	int dept,subdept;
	printf("Enter your dept 1 for cs, 2 for EE: ");
	scanf("%d",&dept);
	switch(dept)
	{
		case 1:printf("You are in the cs dept!");
		printf("enter your subdept");
		printf("1. CSIT");
		printf("2. CSDS");
		printf("3. CSCT");
		printf("Enter your choice");
		scanf("%d",&subdept);
		switch(subdept)
		{
			case 1: printf("You are from CSIT specilaization");break;
						case 2: printf("You are from CSDS specilaization");break;
									case 3: printf("You are from CSCR specilaization");break;


			
		}
		break;
		case 2: //EE dept
		printf("You are from EE specilaization");
		printf("enter your subdept");
		printf("1. Electronic system design");
		printf("2. Radio system");
		printf("3. Integrated circuit design");
		printf("Enter your choice");
		scanf("%d",&subdept);
		switch(subdept)
		case 1: printf("You are from Electronic system design specilaization");break;
		case 2: printf("You are from Radio specilaization");break;
		case 3: printf("You are from Integrated circuit specilaization");break;

		
	}
	break;
}
