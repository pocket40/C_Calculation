#include <stdio.h>

int Operator(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d= %d \n", num1, num2, num1+num2);
	printf("%d-%d= %d \n", num1, num2, num1-num2);
	printf("%dx%d= %d \n", num1, num2, num1 * num2);
	printf("%d��%d= %d \n", num1, num2, num1 / num2);
	printf("%d��%d�� ��������: %d \n", num1, num2, num1 % num2);
}