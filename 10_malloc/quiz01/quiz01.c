#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// 1. 사이즈 확인
	int intSize = sizeof(int) * 73;
	int charSize = sizeof(char) * 43;
	int doubleSize = sizeof(double) * 12;
	int sizeSum = intSize + charSize + doubleSize;
	printf("%d byte\n", sizeSum);
	
	// 2. 배열 값 저장
	int *inputArray = (int *)malloc(sizeof(int) * 3);
	for (int i = 0; i < 3; i++) {
		printf("수를 입력하세요:");
		//scanf("%d", inputArray + i);   // 포인터 연산 
		scanf("%d", &inputArray[i]);
	}
	
	for (int i = 0; i < 3; i++) {
		printf("%d ", inputArray[i]);
	}
	printf("\n");
	
	// 3. 동적 배열 만들기
	int array[4] = {1200, 1500, 1000, 2500};
	int *allocArray = (int *)malloc(sizeof(int) * 4);
	allocArray[0] = 1200;
	allocArray[1] = 1500;
	allocArray[2] = 1000;
	allocArray[3] = 2500;
	
	for (int i = 0; i < 4; i++) {
		printf("%d ", allocArray[i]);
	}
	printf("\n");
	
	// 4. 수 입력
	printf("입력할 개수를 입력하세요:");
	int size = 0;
	scanf("%d", &size);
	int *allocArray1 = (int *)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		int number = 0;
		scanf("%d", &number);
		allocArray1[i] = number;
	}
	
	for (int i = 0; i < size; i++) {
		printf("%d ", allocArray1[i]);
	}
	printf("\n");
	
	// 5. 단어 합치기
	char cArr1[16]; 
	char cArr2[16];
	printf("단어를 입력하세요:");
	scanf("%s", cArr1);  // %s로 받으면 마지막에 자동 null문자 들어감 
	printf("단어를 입력하세요:");
	scanf("%s", cArr2);
	
	int wordSize = strlen(cArr1) + strlen(cArr2);
	char *result = (char *)malloc(sizeof(char) * wordSize + 2); // 추가된 쉼표, null문자까지 고려 
	sprintf(result, "%s,%s", cArr1, cArr2); // printf  문법에 쓴 문장이 result에 저장된다 
	printf("%s\n", result);
}