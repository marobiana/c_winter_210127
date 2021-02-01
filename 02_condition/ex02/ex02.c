#include<stdio.h>

int main() {
//	int number = 0;
//	printf("숫자를 입력하세요:");
//	scanf("%d", &number);
//	
//	// number가 10 이상이고 40 이하이다. (AND, 그리고)
//	// 10 <= number <= 40
//	if (number >= 10 && number <= 40) {
//		printf("%d가 10 이상이고 40 이하이다.", number);
//	} 
//	
//	// number가 10보다 작거나 number가 40보다 크다. (OR, 또는)
//	if (number < 10 || number > 40) {
//		printf("%d가 10보다 작거나 %d가 40보다 크다.", number, number);
//	}
	
	int walk, weight = 0;
	printf("걸은 수와 몸무게를 입력하세요:");
	scanf("%d %d", &walk, &weight);
	
	// 만약에 걸은수가 10000보를 초과하면서 몸무게가 60키로 이하이면 "치킨" 
	if (walk > 10000 && weight <= 60) {
		printf("둘 다 만족하니 치킨");
	}
	
	// 만약에 걸은수가 10000보를 초과하거나 몸무게가 60키로 이하이면 "치킨"
	if (walk > 10000 || weight <= 60) {
		printf("하나라도 만족하니 치킨");
	} 
}
