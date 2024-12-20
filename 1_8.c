#include <stdio.h>

int main() {

    int oldarr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int newarr[10];
    int j = 0;


    for (int i = 0; i < 10; i++) {
        if (oldarr[i] % 2 == 0 && oldarr[i] != 0) {
            newarr[j] = oldarr[i];
            j++;
        }
    }
    printf("new array: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", newarr[i]);
    }


    return 0;
}
