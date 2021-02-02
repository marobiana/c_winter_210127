#include<stdio.h>

int main() {
	// if - else문
	int weight = 0;
	printf("몸무게를 입력하세요:");
	scanf_s("%d", &weight);

	// 몸무게가 70키로 이하이면 치킨, 아니면 샐러드
	if (weight <= 70) {
		printf("치킨 먹자!");
	}
	else {
		printf("샐러드 먹자!");
	}

	// if - else if - else문
	/*
		if문 조건에 해당하지 않으면 else if 확인, 아니면 그다음 else if확인..
		모든 조건이 아닌 경우 마지막으로 else문 수행
		if, else if, else문을 사용한 경우, 이 조건들 중 무조건 하나의 조건에 걸린다.
		처음에 수행했다면 뒤의 문장은 수행하지 않음.
		만약 모든 조건들을 각각 다 확인해야 하면 if문을 사용한다.
		else문이나 else if문은 생략 가능하다.
	*/
	if (weight <= 70) {
		printf("치킨 먹자!");
	} 
	else if (weight <= 75) {    // 70 초과이고 75 이하
		printf("닭가슴살 먹자");
	}
	else if (weight <= 80) {   // 75 초과이고 80 이하
		printf("샐러드나 먹자");
	} 
	else {     		       // 80 초과이고 75 이하
		printf("굶자");
	}
}
