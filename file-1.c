#include <stdio.h>

void firstProg()
{
	int otzhimaniya, podtyagivaniya, prised, skruchivaniya;

	printf("\tОтжимания в отказ, определение нагрузки.\n");

	printf("Кол-во отжиманий: ");
	scanf("%d", &otzhimaniya);

	podtyagivaniya = otzhimaniya/4;
	prised = otzhimaniya*2;
	skruchivaniya = prised;

	printf("Подтягивания = %d\n", podtyagivaniya);
	printf("Приседания = %d\n", prised);
	printf("Скручивания = %d\n", skruchivaniya);
}
