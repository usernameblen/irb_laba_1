//14.В текстовом файле задан целочисленный массив. Разделительный символ между 
//значениями – пробел.Файл корректный.Необходимо считать данные из файла, заполнить
//массив и найти в этом массиве максимальный и минимальные элементы.При реализации
//используйте функцию из задания 4

#include<stdio.h>

int main() {
	FILE* ourfile = fopen ("file.txt", "r");
	if (ourfile == NULL) {
		printf("File is not open(");
		return 1;
	}
	
	//массив куда занесем числа
	int numbers[100];
	//ñ÷¸ò÷èê
	int i = 0;

	//из файла в массив
	while ((i < 100) && (fscanf_s(ourfile, "%d", &numbers[i]) == 1)) {
		i++;
	}

	//макс и мин
	int max = numbers[0];
	int min = numbers[0];
	//+вывод массива
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
	//вывод макс и мин
	printf("Maximum is: %d\n", max);
	printf("Minimum is: %d\n", min);

	fclose(ourfile);
	return 0;
}
