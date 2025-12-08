#include<stdio.h>

void inputdimensions(); 

void inputmatrices(int r1 , int c1 , int r2 , int c2); 

void multiplymatrices(int r1 , int c1 , int r2 , int c2 , int (*ptr_1)[c1] , int (*ptr_2)[c2]);

void printresult(int rows , int col , int (*ptr_3)[col]); 

int main () {
    inputdimensions(); 
    return 0; 
}

void inputdimensions(){
    int r1 , c1 , r2 , c2 ; 
    
    printf("Input Rows for matrix 1 : "); 
    scanf("%d" , &r1); 
    
    printf("Input Columns for matrix 1 :"); 
    scanf("%d" , &c1); 
    
    printf("Input Rows for matrix 2 : "); 
    scanf("%d" , &r2); 
    
    printf("Input Columns for matrix 2 :"); 
    scanf("%d" , &c2); 
    
    inputmatrices(r1 , c1 , r2 , c2); 
    return ;
}

void inputmatrices(int r1 , int c1 , int r2 , int c2) {
    int matrix1[r1][c1]; 
    int (*ptr_1)[c1] = matrix1; 
    int i, j;   // declared once here
    
    printf("Input elements for 1st matrix: \n"); 
    for (i = 0 ; i < r1 ; i++) {
        for (j = 0 ; j < c1 ; j++){
            scanf("%d" , *(ptr_1 + i) + j ); 
        }
    }
    
    int matrix2[r2][c2]; 
    int (*ptr_2)[c2] = matrix2;
    
    printf("Input elements for 2nd matrix: \n"); 
    for (i = 0 ; i < r2 ; i++) {
        for (j = 0 ; j < c2 ; j++){
            scanf("%d" , *(ptr_2 + i) + j ); 
        }
    }
    
    multiplymatrices(r1 , c1 , r2 , c2 , ptr_1 , ptr_2); 
    return ;
}

void multiplymatrices(int r1 , int c1 , int r2 , int c2 , int (*ptr_1)[c1] , int (*ptr_2)[c2]){
    
    int result[r1][c2]; 
    int (*ptr_3)[c2] = result ; 
    int i, j, k;  // declared once here
    
    for (i = 0 ; i < r1 ; i++) {
        for (j = 0 ; j < c2 ; j++) {
            ptr_3[i][j] = 0; 
            for (k = 0 ; k < c1 ; k++) {
                *( *(ptr_3 + i) + j ) += *( *(ptr_1 + i ) + k ) * *( *(ptr_2 + k ) + j); 
            }
        }
    }
    printresult(r1 , c2 , ptr_3); 
    return ; 
}

void printresult(int rows , int col , int (*ptr_3)[col]) {
    int i, j;  // declared here
    
    printf("Result is : \n"); 
    for (i = 0 ; i < rows ; i++) {
        for (j = 0; j < col ; j++) {
            printf("%d " , *( *(ptr_3 + i ) + j )); 
        }
        printf("\n"); 
    }
}

