#include<stdio.h>

int main() {
	int score1 = 0;
	int score2 = 0; 

	printf("점수를 입력하세요: ");
	printf("점수를 입력하세요: ");
	scanf("%d %d ",&score1, &score2);

	int avg = (score1+score2)/2;

	if (avg>=70) {
		printf("합격");
	}
	else{
		printf("불합격");
	}

	// 2. 세 개의 정수를 입력 받아서 가장 큰 값을 출력하세요.
	printf("세개의 정수를 입력하세요:");
	int a = 0;   // 3
	int b = 0;   // 8
	int c = 0;   // 12
	scanf("%d %d %d", &a, &b, &c);
	int max = a; 
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	printf("%d", max);

	// 3. 
	printf("점수1:");
	int score1 = 0;
	scanf("%d", &score1);
	printf("점수2:");
	int score2 = 0;
	scanf("%d", &score2);
	
	double average = (score1 + score2) / (double)2;
		평균이 60점 이상이면 합격
		  한과목이라도 50점 이하면 무조건 과락
		평균 60점 미만이면 불합격
	if (average < 60) {
		printf("불합격\n");
	} 
	else {
		if (score1 <= 50 || score2 <= 50) {
			printf("과락\n");
		}
		else {
			printf("합격\n");
		}
	}
	
	// 4. 윤년
//	4로 나누어 떨어지는 연도는 윤년이다.
//	100으로 나누어 떨어지는 연도는 윤년이 아니다.
//	400으로 나누어 떨어지는 연도는 무조건 윤년이다. 
	printf("연도:");
	int year = 0;
	scanf("%d", &year); 
	// (1)
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				printf("윤년\n");
			} 
			else {
				printf("평년\n");
			}
		} 
		else {
			printf("윤년\n");
		}
	}
	else {
		printf("평년\n");
	}
	
	// (2)
	//	4로 나누어 떨어지는 연도는 윤년이다.
	//	100으로 나누어 떨어지는 연도는 윤년이 아니다.
	//	400으로 나누어 떨어지는 연도는 무조건 윤년이다. 
	if (year % 400 == 0) {
		printf("윤년\n");
	}
	else if (year % 100 == 0) {
		printf("평년\n");
	}
	else if (year % 4 == 0) {
		printf("윤년\n");
	}
	else {
		printf("평년\n");
	}
	
	//	4로 나누어 떨어지는 연도는 윤년이다.
	// 그리고 
	//	100으로 나누어 떨어지지않는  연도는 윤년
	
//	// 또는 
	
	//	400으로 나누어 떨어지는 연도는 무조건 윤년이다. 
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {	//	400으로 나누어 떨어지는 연도는 무조건 윤년이다.
		printf("윤년\n"); 
	}
	else {
		printf("평년\n");
	}
	// 5.
//	도 : 1개가 뒤집어진 상태
//	개 : 2개가 뒤집어진 상태
//	걸 : 3개가 뒤집어진 상태
//	윷 : 4개가 뒤집어진 상태
//	모 : 하나도 뒤집어지지 않은 상태
	printf("윷 상태를 입력하세요:");
	int st1 = 0;
	int st2 = 0; 
	int st3 = 0; 
	int st4 = 0; 
	scanf("%d %d %d %d", &st1, &st2, &st3, &st4);
	int sum = st1 + st2 + st3 + st4;
	
	if (sum == 1) {
		printf("도");
	} 
	else if (sum == 2) {
		printf("개");
	} 
	else if (sum == 3) {
		printf("걸");
	} 
	else if (sum == 4) {
		printf("윷");
	}
	else {
		printf("모");
	}
}
