#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int a = rand() % 3;

	if (a == 0)
		printf("���� a�� 0�Դϴ�.\n");
	else if (a == 1)
		printf("���� a�� 1�Դϴ�.\n");
	else
		printf("���� a�� 2�Դϴ�.\n");

	return 0;
}