#include <stdio.h>

#define MAX_SIZE 100

void readMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    int matrix[MAX_SIZE][MAX_SIZE];
    int transposed[MAX_SIZE][MAX_SIZE];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix:\n");
    readMatrix(matrix, rows, cols);

    printf("Original ");
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transposed, rows, cols);

    printf("Transposed ");
    printMatrix(transposed, cols, rows);

    return 0;
}
