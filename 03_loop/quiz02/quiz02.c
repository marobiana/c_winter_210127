#include<stdio.h>

int main() {
	// 1. 반복 출력
	for (int i = 35; i <= 40; i++) {
		printf("%d ", i);
	}
	printf("\n");

	// 2. 반복 출력
	for (int i = 5; i >= -5; i--) {
		printf("%d ", i);
	}
	printf("\n");

	// 3. 특정 조건 구하기
	// 3-1
	for (int i = 3; i <= 50; i += 3) {
		printf("%d ", i);
	}
	printf("\n");

	// 3-2
	for (int i = 1; i <= 50; i++) {
		if (i % 3 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	// 4. 개수 세기
	int sum = 0;
	for (int i = 1; i < 100; i++) {
		if (i % 7 == 0) {
			sum++;
		}
	}
	printf("7의 배수의 개수는 : %d\n", sum);

	// 5. 구구단
	int num = 0;
	printf("단수를 입력하세요:");
	scanf_s("%d", &num);
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", num, i, num * i);
	}
}
