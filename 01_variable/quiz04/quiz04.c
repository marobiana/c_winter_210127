#include<stdio.h>

int main() {
	// 1. 몫과 나머지
	int q = 0;
	int r = 0;
	printf("입력1:");
	scanf_s("%d", &q);
	printf("입력2:");
	scanf_s("%d", &r);
	printf("몫: %d, 나머지: %d\n", q / r, q % r);

	// 2. 교체
	int x = 0;
	int y = 0;
	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);

	// swap 알고리즘
	int temp = x;
	x = y;
	y = temp;
	printf("x는 %d이고, y는 %d입니다.\n", x, y);

	// 3. 초 변환
	int seconds = 0;
	printf("초:");
	scanf_s("%d", &seconds);
	int m = seconds / 60;
	int s = seconds % 60;
	printf("%d분 %d초\n", m, s);

	// 4. 자리수 쪼개기
	// 1234 / 1000  => 1.234   몫:1  나머지:234
	// 234 / 100    => 2.34     몫:2  나머지:34
	// 34 / 10      => 3.4        몫:3  나머지:4

	int number = 0;
	printf("입력:");
	scanf_s("%d", &number);
	// number:1234

	int q = number / 1000;   // 1
	int r = number % 1000;  // 234
	printf("%d\n", q);

	q = r / 100;    // 2
	r = r % 100;   // 34
	printf("%d\n", q);

	q = r / 10;    // 3
	r = r % 10;   // 4
	printf("%d\n", q);
	printf("%d\n", r);

	// 5. 자리수 쪼개고 합계
	// number:1234
	
	int sum = 0;
	q = number / 1000;   // 1
	r = number % 1000;  // 234
	sum = sum + q;

	q = r / 100;    // 2
	r = r % 100;   // 34
	sum = sum + q;

	q = r / 10;    // 3
	r = r % 10;   // 4
	sum = sum + q;
	sum = sum + r;

	printf("합계는 %d 입니다.", sum);
}
