#include <stdio.h>
#include <stdlib.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	print("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayIni();
	printf("\n");
	system("pause");
	return 0;
}

void staicArrayyInit(void)
{
	static int array[3];
	int i;

	printf("\nValues on entering staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d ", i, array1[i]);

	printf("\nValues on existing staticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array1[%d]=%d ", i, array1[i] += 5);
}

void automaticArrayInit(void);
{
	int array2[3] = { 1,2,3 };
	int i;

	printf("\n\nValues on entering automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d]=%d ", i, array2[i]);

	printf("\nVlalues on exiting automaticArrayInit:\n");

	for (i = 0; i <= 2; i++)
		printf("array2[%d]=%d ", i, array2[i] += 5);
}