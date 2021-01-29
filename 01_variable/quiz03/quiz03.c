#include<stdio.h>

int main() {
	// 1. 평균 구하기
	int kor = 93;
	int math = 88;
	int eng = 94;
	double average = (float)(kor + math + eng) / 3.0; // int끼리 연산하면 int
	printf("국어 %d점, 수학 %d점, 영어 %d점\n", kor, math, eng);
	printf("평균 %lf점 입니다.\n", average);

	// 2. 화씨 구하기
	int c = 30;
	double f = 9 / (double) 5 * c + 32;
	printf("섭씨 %d도는 화씨 %lf도 입니다.", c, f);
}
