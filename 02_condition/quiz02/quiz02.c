#include<stdio.h>

int main() {
	// 1. 두 개의 점수를 입력 받아서 두 점수 모두가 70점 이상이면 합격입니다
//	printf("두 개의 점수를 입력하세요:");
//	int score1 = 0;
//	int score2 = 0;
//	scanf("%d %d", &score1, &score2);
//	if (score1 >= 70 && score2 >= 70) {
//		printf("합격입니다.");
//	}

	// 2. 수를 입력 받아서 2와 3의 공배수인지 판별하세요.
//	printf("수를 입력하세요:");
//	int number = 0;
//	scanf("%d", &number);
//	if (number % 2 == 0 && number % 3 == 0) {
//		printf("%d는 2와 3의 공배수입니다.", number);
//	}

	// 유효성 체크 (validation check)
	//1 ~ 10의 사이의 수를 입력 받아야 한다. 범위를 넘어갈 경우 잘못 입력하셨습니다를 출력하세요.
	printf("1 ~ 10사이의 수를 입력하세요:");
	int number = 0;
	scanf("%d", &number);
	if (number < 1 || number > 10) {
		printf("잘못 입력하셨습니다.");
	}
}

