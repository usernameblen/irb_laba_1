//14.� ��������� ����� ����� ������������� ������. �������������� ������ ����� 
//���������� � ������.���� ����������.���������� ������� ������ �� �����, ���������
//������ � ����� � ���� ������� ������������ � ����������� ��������.��� ����������
//����������� ������� �� ������� 4

#include<stdio.h>

int main() {
	FILE* ourfile = fopen ("file.txt", "r");
	if (ourfile == NULL) {
		printf("File is not open(");
		return 1;
	}
	
	//������ ���� ������� �����
	int numbers[100];
	//�������
	int i = 0;

	//�� ����� � ������
	while ((i < 100) && (fscanf_s(ourfile, "%d", &numbers[i]) == 1)) {
		i++;
	}

	//���� � ���
	int max = numbers[0];
	int min = numbers[0];
	//+����� �������
	puts("Our array:");
	for (int g = 0; g < i; g++) {
		if (numbers[g] > max) {
			max = numbers[g];
		}
		if (numbers[g] < min) {
			min = numbers[g];
		}
		printf("%d ", numbers[g]);
	}
	puts("");
	//����� ���� � ���
	printf("Maximum is: %d\n", max);
	printf("Minimum is: %d\n", min);

	fclose(ourfile);
	return 0;
}