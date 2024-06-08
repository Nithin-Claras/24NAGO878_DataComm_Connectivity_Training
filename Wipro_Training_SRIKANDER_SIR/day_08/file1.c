#include<stdio.h>
#include "add.h"
#include "add.h"

int global = 5;
int add(int a, int b);

int main()
{
	printf("%s:%d:%d \n", __func__, __LINE__, global);
	int sum = add(3,4);
	printf("Sum = %d \n", sum);
	return 0;
}

