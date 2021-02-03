#include<stdio.h>

int main() {
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	printf("안녕하세요\n");
	
	// while문을 이용해서 "안녕하세요" 3번 찍기
	int i = 0;
	while (i < 3) {    // 0 1 2   3
		printf("안녕하세요 %d\n", i);
		//i = i + 1;
		//i += 1;  // 복합 대입 연산자 
		//++i; 
		i++;
	}
	
	// ++i와 i++의 차이점 
	int number = 10;
	printf("%d\n", ++number); // 11  number = number + 1;
	printf("%d\n", number++); // 예상값:12, 결과값:11 
	printf("%d\n", number);   // 결과값:12 
	
	// 0 ~ 4: 5번
	i = 0;
	while (i < 5) {
		printf("리모컨 %d\n", i);
		i += 1;
	} 
	
	// 1 ~ 5: 5번
	i = 1;
	while (i <= 5) {
		printf("이어폰 %d\n", i);
		i++;
	}
	
	// 5 ~ 0: 6번
	i = 5;
	while (i >= 0) {
		printf("마우스 %d\n", i);
		i--;
	}
	
	// 반복할 횟수
	printf("반복할 횟수를 입력하세요");
	int count = 0;
	scanf("%d", &count);   // 3
	i = 0;
	while (i < count) {
		printf("%d 횟수만큼 반복 %d\n", count, i);
		i++;
	}
	
	// 1+2+3+4+5+6+7+8+9+10  합계 
	int sum = 0;
	i = 1;
	while (i <= 10) {
		sum += i;   // sum = sum + i;
		i++;
	}
	printf("합계:%d", sum);
}
