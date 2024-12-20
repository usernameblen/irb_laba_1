#include <stdio.h>


int func(int array[], int size, int find) {
    int middle;
    middle = (size / 2) - 1; //индекс среднего элемента


    while (array[middle] != find) { //передвигаем индекс до тех пор пока значения не совпадут

        if (array[middle] > find) {
            middle -= 1;
        }
        else if (array[middle] < find) {
            middle += 1;
        }
    }
    return middle;
}

int main() {
    int result;
    int find;
    int array[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
    int size = 10;

    printf("введите число от 11 до 20, которое хотите найти\n");
    scanf_s("%d", &find);
    //проверка
    while (find > 20 || find < 11) {
        printf("перeписывать, бан\n");
        scanf_s("%d", &find);
    }

    result = func(array, size, find);
    printf("%d", result);

    return 0;
}
