#include<stdio.h>

int main() {
	printf("Hello, world!\n"); // 줄바꿈  \n
	printf("Hello, world!\n");

	// 한줄 주석
	/*
	    여러줄 주석
	    변수(Variable)와 자료형(Data type)
	*/

	// 정수형 변수(integer)
	int number1 = 3;   // 변수에 값을 넣는 것을 '초기화'라고 하며, 값을 넣어두는게 좋다.
	printf("%d", number1);

	// 변수이므로 값을 바꿀 수 있다. 재사용 할 때는 자료형은 쓰지 않는다.
	number1 = 5;
	printf("%d\n", number1);

	int number2 = 100;
	int sum = number1 + number2; // 변수끼리 연산 가능
	printf("%d\n", sum);

	// 실수(Float) 변수
	float f = 1.5;
	printf("%f\n", f);

	printf("%f\n", number2 * f); // 정수와 실수 연산 가능

	// 실수(double) 변수
	double d = 3.8;
	printf("%lf\n", d);

	// 문자(character) 변수: 문자 한개. 작은 따옴표로 감싼다.
	char c = '\0';  // 문자 변수 초기화는 이렇게한다. (null 문자) 또는 0을 넣어도 됨.
	c = 'a';
	printf("%c\n", c);

	// 상수: 변하지 않는 값
	const int cInt = 3;
	// cInt = 5;    값 변경을 시도하면 에러
}
