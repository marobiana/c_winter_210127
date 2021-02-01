#include<stdio.h>

int main() {
	// 1. 문자 비교
	char alphabet = '\0'; // 문자 초기화
	printf("소문자 알파벳을 입력하세요:");
	scanf_s("%c", &alphabet);
	if (alphabet < 'k') {
		printf("%c는 k보다 앞에 있습니다.\n", alphabet);
	}
	if (alphabet >= 'k') {
		printf("%c는 k보다 뒤에 있습니다.\n", alphabet);
	}

	// 2. 수 비교
	int a, b = 0;
	printf("두 개의 수를 입력하세요:");
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		printf("a가 더 큽니다.\n");
	}
	if (a < b) {
		printf("b가 더 큽니다.\n");
	}
	if (a == b) {
		printf("a와 b는 같습니다.\n");
	}
	
	// 3. 시험 합격
	int score = 0;
	printf("성적을 입력하세요:");
	scanf_s("%d", &score);
	if (score >= 70) {
		printf("합격입니다.\n");
	}
	if (score < 70) {
		printf("불합격입니다.\n");
	}

	// 4. 홀짝 검사
	int number = 0;
	printf("수를 입력하세요:");
	scanf_s("%d", &number);
	if (number % 2 == 0) {
		printf("짝수");
	}
	if (number % 2 != 0) {
		printf("홀수");
	}
  
  // 5. 18의 자릿수 합은 1 + 8 = 9이고, 18은 9로 나누어 떨어지므로 하샤드 수입니다.
	printf("숫자를 입력하세요:");
	int number = 0;
	scanf("%d", &number);
	
	int ten = number / 10;
	int one = number % 10;
	
	if (number % (ten + one) == 0) {
		printf("%d은 하샤드 수 입니다.", number);
	}
	if (number % (ten + one) != 0) {
		printf("%d는 하샤드 수가 아닙니다.", number);
	}
}
