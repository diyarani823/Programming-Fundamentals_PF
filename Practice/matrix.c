#include <stdio.h>
int main()
{
  int n;
  printf("Swap Upper and Lower Triangle Elements!!!\n");
  printf("Please Enter Sqaure Matrix\n");
  printf("Enter the number of rows(columns):");
  scanf("%d",&n);

  int matrix[n][n];
int i,j;
  for(i =0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  // According to maths logic
  for(i =0;i<n;i++){
    for(j=0;j<n;j++){
      if(i!=j && j>i){
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
  }


   printf("After Swapping\n");
   for(i =0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",matrix[i][j]);
    }
    printf("\n");
  }

}
