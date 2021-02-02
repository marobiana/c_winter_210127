#include<stdio.h>

int main() {
	char grade = '\0';  // 빈 문자 
	printf("등급을 입력하세요:");
	scanf("%c", &grade);
	
	// 등급이 'A'이면 소고기, 'B'이면 삼겹살, 그 외 라면 
	if (grade == 'A') {
		printf("소고기\n");
	}
	else if (grade == 'B') {
		printf("삼겹살\n");
	}
	else {
		printf("라면\n");
	}
	
	// switch : 조건이 '같다'일 때 if문을 대체해서 사용할 수 있다. 
	// case에 해당했을 때 조건을 빠져나오기 위해서 break문을 사용한다. 
	switch (grade) {
	case 'A':
		printf("소고기\n");
		break;
	case 'B':
		printf("삼겹살\n");
		break;
	default:
		// 아무 케이스에도 해당되지 않으면
		printf("라면\n"); 
	}
}
