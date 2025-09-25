#include<stdio.h>
int main()
{
    int dept, subdept;
    printf("Enter your dept (1 for CS, 2 for EE): ");
    scanf("%d",&dept);
    switch(dept)
    {
        case 1: 
            printf("You are in the CS dept!\n");
            printf("Enter your subdept:\n");
            printf("1. CSIT\n");
            printf("2. CSDS\n");
            printf("3. CSCT\n");
            printf("Enter your choice: ");
            scanf("%d",&subdept);
            switch(subdept)
            {
                case 1: printf("You are from CSIT specialization\n"); break;
                case 2: printf("You are from CSDS specialization\n"); break;
                case 3: printf("You are from CSCT specialization\n"); break;
                default: printf("Invalid CS subdept choice\n");
            }
            break;
        case 2: 
            printf("You are in the EE dept!\n");
            printf("Enter your subdept:\n");
            printf("1. Electronic system design\n");
            printf("2. Radio system\n");
            printf("3. Integrated circuit design\n");
            printf("Enter your choice: ");
            scanf("%d",&subdept);
            switch(subdept)
            {
                case 1: printf("You are from Electronic system design specialization\n"); break;
                case 2: printf("You are from Radio specialization\n"); break;
                case 3: printf("You are from Integrated circuit specialization\n"); break;
                default: printf("Invalid EE subdept choice\n");
            }
            break;
        default: 
            printf("Invalid department choice\n");
    }
    return 0;
}

