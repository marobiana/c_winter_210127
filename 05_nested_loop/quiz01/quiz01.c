#include<stdio.h>

int main() {
	// 1. 
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			printf("(%d, %d)", i, j);
		}
		printf("\n");
	}

	// 2. 
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d \n", i, j, i * j);
		}
	}

	// 3. 삼각형
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	// 4. 역삼각형
	for (int i = 5; i >= 1; i--) {
		for (int j = i; j >= 1; j--) {
			printf("*");
		}
		printf("\n");
	}
	
	// 5. 피라미드
	for (int i = 0; i < 5; i++) {
		// 공백 
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		
		// 별 찍기
		for (int j = 0; j < (2 * i) + 1; j++) {
			printf("*");
		} 
		printf("\n");
	}
}
