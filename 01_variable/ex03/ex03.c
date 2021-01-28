#include<stdio.h>

int main() {
	// 자료형 변환(casting)
	double pi = 3.14;
	int intPi = (int)pi;  // double -> int로 변환 : 소수점 뒷자리 값 버림
	printf("%d\n", intPi); 
		
	int number = 7;
	double result = number / 2;
	printf("%lf\n", result);  // 예상값:3.5,  결과:3.0
	// 정수에서 정수를 나누면 정수가 나온다. 결과값 정수를 실수로 만들었기 때문에 값이 유실된다.
		
	// <해결방법>
	//   1. 둘 중 하나의 값을 실수로 형변환(casting)한다.
	result = number / (double)2;
	printf("%lf\n", result);
		
	//   2. 실수로 나눈다.
	result = number / 2.0;
	printf("%lf\n", result);
}
