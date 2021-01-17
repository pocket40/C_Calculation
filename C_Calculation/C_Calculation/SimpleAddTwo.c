#include <stdio.h>

int SimpleAddTwo(void)
{
	int num1 = 3;
	int num2 = 4;

	int result = num1 + num2;//선언과 동시에 연산결과를 초기화 가능

	printf("덧셈 결과: %d \n", result);
	printf("%d + %d = %d\n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다.\n", num1, num2, result);
	return 0;

}