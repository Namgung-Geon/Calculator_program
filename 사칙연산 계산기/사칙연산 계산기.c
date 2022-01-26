#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 0;
	char c;

	printf("사칙연산 계산기\n");
	printf("덧셈 기호 : +, 뺄셈 기호 : -, 곱셈 기호 : *, 나눗셈 기호 : /\n");
	scanf("%d%s%d", &a, &c, &b);
	if (c =='+'){
		printf("답 : %d\n", a + b);
	}

	if (c == '-') {
		printf("답 : %d\n", a - b);
	}

	if (c == '*') {
		printf("답 : %d\n", a * b);
	}

	if (c == '/') {
		printf("답 : %d, 나머지 : %d", a / b, a % b);
	}
	
	return 0;
}