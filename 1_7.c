//7. Задан числовой массив. Переписать в новый массив числа, стоящие на нечётных позициях
int main() {

    int oldarr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int newarr[5];
    int j = 0;


    for (int i = 0; i < 10; i += 2) {
        newarr[j] = oldarr[i];
        j += 1;
    }

    printf("New array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", newarr[i]);
    }

    return 0;
}
