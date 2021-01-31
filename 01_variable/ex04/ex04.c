#include<stdio.h>

int main() {
	int ggang = 0;
	printf("새우깡 가격을 입력하세요:");     
	// 사용자로부터 입력을 받는 함수  scanf_s
	scanf_s("%d", &ggang); // ggang 변수의 주소를 찾아서 입력 받은 값을 넣는다. 
	printf("%d", ggang);
	
	// 새우깡 가격과 개수를 입력받고 전체의 가격 구하기 
	ggang = 0;
	int count = 0;
	printf("새우깡 가격과 개수를 입력하세요:");
	scanf_s("%d %d", &ggang, &count); 
	
	printf("가격은 %d원 입니다.", ggang * count);
}
