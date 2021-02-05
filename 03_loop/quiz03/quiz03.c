#include<stdio.h>

int main() {
	// 1. 무한 루프를 통해서 반복적으로 수를 입력을 받고 0이 입력 되었을때 반복문을 빠져 나오게 하세요.
	while (1) {
		printf("수를 입력하세요:");
		int number = 0;
		scanf("%d", &number);
		if (number == 0) {
			printf("끝\n");
			break;
		}
	}
	
	// 2. 3부터 50까지 3의 배수의 합을 출력하세요.
	int sum = 0;
	for (int i = 3; i <= 50; i++) {
		// 3의 배수가 아니면 skip
		if (i % 3 != 0) {
			continue;
		}
		
		// 3의 배수이면 합 
		sum += i;
	}
	printf("%d", sum);
	
}
