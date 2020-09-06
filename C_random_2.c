#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int a = rand() % 3;

	if (a == 0)
		printf("변수 a는 0입니다.\n");
	else if (a == 1)
		printf("변수 a는 1입니다.\n");
	else
		printf("변수 a는 2입니다.\n");

	return 0;
}