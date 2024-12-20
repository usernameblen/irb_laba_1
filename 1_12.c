//����������� ������� ������ ��������� � ������, ����������� ����������� ������� ������

#include<stdio.h>

char* strstrmy(const char* str, const char* substr) {
    if (*str == '\0') {
        return (char*)str;
    }//���� ����������� ������ ������,������ �� �������

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == substr[0]) {
            int k = 0;
            while (substr[k] != '\0' && str[i + k] == substr[k]) {
                k++;
            }//���������� ������ � ���������,������ ������ �� ����� ���������
            if (substr[k] == '\0') {
                return (char*)&str[i];
            }//�����,�� �����,����� ����������
        }
    }

    return NULL; //�����, ��������� ����� ����
}

int main() {
    char* str1 = "Hello world!";
    char* str2 = "world";
    char* result = strstrmy(str1, str2);

    if (result) {
        printf("%s\n", result);
    }
    else {
        puts("��������� �� �������(");
    }

    return 0;
}
