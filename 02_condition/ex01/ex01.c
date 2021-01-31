#include <stdio.h>

int main() {
	int weight = 0;
	printf("체중을 입력하세요:");
	scanf("%d", &weight);
	
	// 만약에 몸무게가 55키로 미만이면 "치킨"
	if (weight < 55) {
		printf("치킨");
	}
	
	// 만약에 몸무게가 100키로 이상이면 "다이어트"
	if (weight >= 100) {
		printf("다이어트");
	}
	
	// 만약에 몸무게가 65키로 이면 "65키로 이다"
	if (weight == 65) {
		printf("65키로 이다");
	} 
	
	// 만약에 몸무게가 65키로가 아니면 "65키로가 아니다"
	if (weight != 65) {
		printf("65키로가 아니다.");
	} 
}
