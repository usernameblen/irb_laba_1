#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], 
    int result[10][10], int row1, int column1, 
    int row2, int column2) {
    // ������ �������� ������� ������
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            result[i][j] = 0;
        }
    }

    // �������� �������
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int row1, column1, row2, column2;

    // ������� ������ �������
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf_s("%d %d", &row1, &column1);

    // ���� ������ �������
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    // ������� ������ �������
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf_s("%d %d", &row2, &column2);

    // �������� ���������
    if (column1 != row2) {
        printf("Error: Matrix multiplication is not possible.\n");
        return 1;
    }

    // ���� ������ �������
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            scanf_s("%d", &matrix2[i][j]);
        }
    }

    // ��������� ������
    multiplyMatrices(matrix1, matrix2, result, row1, column1, row2, column2);

    // ���������
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
