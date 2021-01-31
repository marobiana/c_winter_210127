#include<stdio.h>

int main() {
	float pi = 3.1465926535897;
	printf("원주율: %f\n", pi);  // 소수점 아래 6자리까지 표기
	printf("원주율 둘째자리: %.2f\n", pi); // 소수점 아래 2자리까지 반올 림
	printf("원주율 여덟째자리: %.8f\n", pi); // 소수점 아래 8자리까지 반올림 
	
	int noodleCup = 850;
	printf("육개장 가격: %d\n", noodleCup);
	
	int noodleCup3 = noodleCup * 3;
	printf("육개장 3개의 가격: %d\n", noodleCup3);
	
	// 10,000원으로 육개장 3개 사고, 거스름돈 얼마가 되는가?
	int money = 10000;
	int change = money - noodleCup3;
	printf("거스름돈:%d\n", change);
	
	// 5,000원 육개장을 몇 개 사고, 거스름돈이 얼마 되는가?
	money = 5000;
	int noodleCount = money / noodleCup; // 정수형 자료형이라 몫만 구해진다. 
	printf("살 수 있는 육개장 수: %d\n", noodleCount);
	change = money % noodleCup;
	printf("거스름돈:%d", change);
}
