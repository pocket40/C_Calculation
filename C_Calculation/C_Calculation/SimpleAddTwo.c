#include <stdio.h>

int SimpleAddTwo(void)
{
	int num1 = 3;
	int num2 = 4;

	int result = num1 + num2;//����� ���ÿ� �������� �ʱ�ȭ ����

	printf("���� ���: %d \n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d�� %d�� ���� %d�Դϴ�.\n", num1, num2, result);
	return 0;

}