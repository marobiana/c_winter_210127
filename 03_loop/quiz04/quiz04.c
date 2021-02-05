#include<stdio.h>

int main() {
	// 1. 합 구하기
	int num = 0;
	printf("수를 입력하세요:");
	scanf_s("%d", &num);
	int sum = 0;
	for (int i = 0; i <= num; i++) {
		sum += i;
	}
	printf("합은 %d입니다.\n", sum);

	// 2. 팩토리얼
	printf("수를 입력하세요:");
	scanf_s("%d", &num);
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	printf("%d!은 %d입니다.\n", num, fact);

	// 3. 약수 구하기
	printf("수를 입력하세요:");
	scanf_s("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
}
