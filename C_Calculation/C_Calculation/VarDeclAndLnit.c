#include <stdio.h>

int VarDe(void)
{
	int num1, num2;
	int num3 = 30, num4 = 40; //���� ���� �� �ʱ�ȭ
	
	/*printf("num1: %d, num2: %d \n", num1, num2);*/
	num1 = 10; // ���� num1�� �ʱ�ȭ
	num2 = 20; // ���� num2�� �ʱ�ȭ

	printf("num1: %d, num2: %d", num1, num2);
	printf("num3: %d, num4: %d", num3, num4);
	return 0; 

}