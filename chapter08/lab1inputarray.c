#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//초기화로 모든 원소에 0을 저장
	// 크기가 20인 int형 배열 input을 선언하고 모든 원소를 0으로 초기화하세요
	int input[20] = { 0 };
	int i;

	printf("배열에 저장할 정수를 여러 개 입력하시오. ");
	printf("0을 입력하면 입력을 종료합니다.\n");

	// 인덱스 변수 i를 0으로 초기화하세요
	i = 0;
	// do-while문을 사용해 scanf("%d", &input[i]); 로 정수를 입력받고, input[i++] != 0인 동안 반복하세요
	do {
		if (i >= 20) break;
		scanf("%d", &input[i]);
	} while (input[i++] != 0);

	// i를 0으로 초기화하세요
	i = 0;

	// input[i]가 0이 아닌 동안 printf("%d ", input[i++]); 형식으로 출력하는 while문을 작성하세요
	while (input[i] != 0) {
		printf("%d ", input[i++]);
	}
	
	puts("");

	return 0;
}
