#include<stdio.h>

int main() {
	int month = 0;
	printf("월을 입력하세요:");
	scanf_s("%d", &month);

	switch (month) {
	case 3:
	case 4:
	case 5:
		printf("봄");
		break;
	case 6:
	case 7:
	case 8:
		printf("여름");
		break;
	case 9:
	case 10:
	case 11:
		printf("가을");
		break;
	default:
		printf("겨울");
	}
