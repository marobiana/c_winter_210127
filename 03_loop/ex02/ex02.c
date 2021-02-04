#include<stdio.h>

int main() {
	// do-while: 조건이 거짓이어도 무조건 한번은 수행 
	int i = 0;
	do {
		printf("눈사람 %d\n", i);
		i++;
	} while (i < 0);
	
	// for (초기식; 조건; 증감식) { } 
	// 0 ~ 4: 5개
	for (int i = 0; i < 5; i++) {
		printf("프린터기 %d\n", i);
	} 
	
	// 1 ~ 5: 5개
	for (int i = 1; i <= 5; i++) {
		printf("귤 %d\n", i);
	} 
	
	// 5 ~ 1: 5개
	for (int i = 5; i >= 1; i--) {
		printf("키보드 %d\n", i);
	} 
	
	// 1+2+3+4+5+6+7+8+9+10 합계 
	int sum = 0; 
	for (int i = 1; i <= 10; i++) {
		sum += i;   // sum = sum + i;
	}
	printf("합은 %d 입니다.", sum);
}
