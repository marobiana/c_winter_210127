#include <stdio.h>

int main() {
	int weight = 0;
	printf("체중을 입력하세요:");
	scanf("%d", &weight);
	
	// 만약에 몸무게가 55키로 미만이면 "치킨"
	if (weight < 55) {
		printf("치킨\n");
	}
	
	// 만약에 몸무게가 100키로 이상이면 "다이어트"
	if (weight >= 100) {
		printf("다이어트\n");
	}
	
	// 만약에 몸무게가 65키로 이면 "65키로 이다"
	if (weight == 65) {
		printf("65키로 이다\n");
	} 
	
	// 만약에 몸무게가 65키로가 아니면 "65키로가 아니다"
	if (weight != 65) {
		printf("65키로가 아니다.\n");
	} 
	
	
	// 두 개의 수 입력받고 비교하기
	printf("두 개의 수를 입력하세요:");
	int n1, n2 = 0; 
	scanf("%d %d", &n1, &n2);
	
	// n1이 n2보다 크다
	if (n1 > n2) {
		printf("%d가 %d보다 크다", n1, n2);
	} 
	
	// n1이 n2보다 작다
	if (n1 < n2) {
		printf("%d가 %d보다 작다", n1, n2);
	} 
	
	// n1과 n2는 같다
	if (n1 == n2) {
		printf("%d와 %d는 같다", n1, n2);
	} 
	
	// n1과 n2는 다르다
	if (n1 != n2) {
		printf("%d와 %d는 다르다", n1, n2);
	}
}
