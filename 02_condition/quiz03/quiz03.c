#include<stdio.h>

int main() {
	// 1. 정수를 입력 받고 음수인지 양수인지 출력하세요.
//	printf("정수를 입력하세요:");
//	int number = 0;
//	scanf("%d", &number);
//	if (number < 0) {
//		printf("음수");
//	}
//	else {
//		printf("양수");
//	}

	// 2. 90 점이상이면 A , 80점 이상 B, 70점 이상 C, 60점 이상 D, 그외 F 를 출력하세요
//	printf("점수를 입력하세요:");
//	int score = 0;
//	scanf("%d", &score);
//	if (score >= 90) {
//		printf("A");
//	} 
//	else if (score >= 80) { // 80 ~ 89
//		printf("B");		
//	}
//	else if (score >= 70) { // 70 ~ 79
//		printf("C");
//	}
//	else if (score >= 60) { // 60 ~ 69
//		printf("D");
//	}
//	else { // ~59
//		printf("F");
//	}

	// 3.
//	~ 10 이하	정상
//	11 ~ 20 이하	과체중
//	20 ~ 초과	비만
	printf("bmi 수치를 입력하세요:");
	int bmi = 0;
	scanf("%d", &bmi);
	if (bmi <= 10) {  // ~ 10
		printf("정상");
	}
	else if (bmi <= 20) {  // 11 ~ 20
		printf("과체중");
	}
	else { // 21 ~ 
		printf("비만");
	}
}
