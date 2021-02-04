#include<stdio.h>

int main() {
	// break문: break가 써진 곳의 가까운 반복문에서 빠져나온다.
	int i = 0;
	// 0:거짓,  0이 아닌 수:참 
	while (1) {    // 0 1 2 3 4    5
		if (i == 5) {
			break;
		}		
		printf("카메라 %d\n", i);
		i++;
	}
	
	// continue: 아래 코드들을 수행하지 않고 조건을 보러 간다.
	// 1 ~ 10까지 수  3의 배수 출력하지 않기
	// 1 2 4 5 7 8 10 
	for (int i = 1; i <= 10; i++) {
		// 3의 배수가 아닐 때 출력 
		if (i % 3 != 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	
	for (int i = 1; i <= 10; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	
}
