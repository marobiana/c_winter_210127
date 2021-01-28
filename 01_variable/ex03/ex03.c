#include<stdio.h>

int main() {
	// 자료형 변환(casting)
	float pi = 3.14;
	int intPi = (int)pi;   // float -> int로 변환	
	printf("%d\n", intPi);
	
	float pi2 = (float)intPi;
	printf("%f\n", pi2);
	
	int number = 7;
	float result = number / 2;  // 예상값: 3.5    결과값: 3.0 
	printf("%f\n", result); 
	
	// 정수에서 정수를 나누면 정수가 나온다. 
	// 결과값 정수를 실수로 만들었기 때문에 값이 유실된다. 
	
	// 해결방법 둘중에 하나의 값을 형변환(casting)한다. 
	result = (float)number / 2; 
	printf("%f\n", result); 
}



