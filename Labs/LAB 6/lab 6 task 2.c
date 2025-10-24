#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1; i<=10; i++){   // i goes from 1 to 10
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
