#include <stdio.h>

void function(int* aptr, int* bptr) {
	int g = *bptr;
	int* ptr = bptr;
	*ptr = *aptr;
	*aptr = g;
}

int main() {
	int a;
	int b;
	printf("������� �������� ���������� a: ");
	scanf_s("%d", &a);
	printf("\n������� �������� ���������� b: ");
	scanf_s("%d", &b);
	int* aptr = &a;
	int* bptr = &b;

	function(aptr, bptr);

	printf("\n�������� ���������� ���������� �������.\na = %d\nb = %d", a, b);

	return 0;
}
