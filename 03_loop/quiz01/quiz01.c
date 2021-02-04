#include<stdio.h>

int main() {
	// 1. 반복 출력
	int count = 0;
	printf("횟수를 입력하세요:");
	scanf_s("%d", &count);
	int i = 0;
	while (i < count) {
		printf("화이팅!!!\n");
		i++;
	}

	// 2. 카운트 다운 "발사"
	printf("카운트 다운 수를 입력하세요:");
	scanf_s("%d", &count);
	while (count >= 0) {
		printf("%d\n", count--);
	}

	// 3. 반복 입력
	i = 0;
	int num = 0;
	while (i < 5) {
		printf("수를 입력하세요:");
		scanf_s("%d", &num);
		printf("출력: %d\n", num);
		i++;
	}

	// 4. 구구단
	num = 3;
	i = 1;
	while (i <= 9) {
		printf("%d X %d = %d\n", num, i, num * i);
		i++;
	}
