#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main() {
	setlocale(LC_ALL, "Russian");
	int k;
	printf("������� �������������� �����  = ");
	scanf_s("%d", &k);
	if ((k % 11 == 0) && (k % 2 == 1))
		printf("����� �������� �������� ������� 11\n");
	else 
		printf("����� �� �������� �������� ������� 11\n");

	system("pause");
	return 0;
}