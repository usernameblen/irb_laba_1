#include <stdio.h>
#define SIZE 10
int main() {
    int arr[SIZE] = { 5, 3,6, 7, 2, 15, 20, 5, 6, 4 };

    //������� ����������� ������
    puts("����������� ������");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
    //��������� �������� ���������� ���������, �����������
    for (int i = SIZE - 1; i >= 0; i--) {
        for (int g = 0; g < i; g++) {
            if (arr[g] > arr[g + 1]) {
                int temp = arr[g];
                arr[g] = arr[g + 1];
                arr[g + 1] = temp;
            }
        }
    }

    //������� �������� ������
    puts("�������� ������");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
