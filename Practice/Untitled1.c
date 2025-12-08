#include <stdio.h>

// Function to input sizes
void inputSize(int *r1, int *c1, int *r2, int *c2) {
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", r1, c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", r2, c2);
}

// Function to validate size
int validateSize(int c1, int r2) {
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0; // invalid
    }
    return 1; // valid
}

// Function to input both matrices
void inputMatrices(int r1, int c1, int (*mat1)[c1],
                   int r2, int c2, int (*mat2)[c2]) {
    int i, j;

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", *(mat1 + i) + j);  // pointer to mat1[i][j]
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", *(mat2 + i) + j);  // pointer to mat2[i][j]
        }
    }
}

// Function to multiply matrices
void multiply(int r1, int c1, int c2,
              int (*mat1)[c1], int (*mat2)[c2], int (*result)[c2]) {
    int i, j, k, sum;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum += *(*(mat1 + i) + k) * (*(*(mat2 + k) + j)); // pointer arithmetic
            }
            *(*(result + i) + j) = sum;  // store in result
        }
    }
}

// Function to print a matrix
void printMatrix(int r1, int c2, int (*result)[c2]) {
    int i, j;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", *(*(result + i) + j));  // pointer arithmetic (result[i][j])
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input sizes
    inputSize(&r1, &c1, &r2, &c2);

    // Validate sizes
    if (!validateSize(c1, r2)) {
        return 0; // exit if multiplication not possible
    }

    // Declare matrices with exact sizes (VLAs)
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];

    // Input elements
    inputMatrices(r1, c1, mat1, r2, c2, mat2);

    // Multiply matrices
    multiply(r1, c1, c2, mat1, mat2, result);

    // Print result
    printf("Result of multiplication:\n");
    printMatrix(r1, c2, result);

    return 0;
}

