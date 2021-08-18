#include <stdio.h>
#include "header.h"

int main()
{
	int num;

	printf("\tЕдинорог\n");
	printf("1. Отжимания в отказ. Программа\n");
	printf("2. Три золотых упражнения. Программа\n");
	printf("3. Распределение максимальноого кол-ва повторений на подходы\n\n");

	printf("Выбор: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1: printf("\n-------\n"); firstProg();break;
	case 2: printf("\n-------\n"); secondProg();break;
	case 3: printf("\n-------\n"); thirdProg();break;
	default:
		printf("\nчто то пошло не так\n");
	}

	return 0;
}
