#include <stdio.h>
#include <string.h>

// функция для переворота строки
void reverse_string(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[] = "Привет, мир!";
    reverse_string(str);
    printf("Перевернутая строка: %s\n", str);
    return 0;
}
