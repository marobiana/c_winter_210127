#include<stdio.h>

int main() {
//	시험 성적이 90점 이상이면 'A'학점이고 평점은 4.0 입니다.
//	시험 성적이 80점 이상이면 'B'학점이고 평점은 3.0 입니다.
	char grade = 'A';
	float gradePoint = 4.0;
	printf("시험 성적이 90점 이상이면 %c학점이고 평점은 %.1f 입니다.\n", grade, gradePoint);
	grade = 'B';
	gradePoint = 3.0;
	printf("시험 성적이 80점 이상이면 %c학점이고 평점은 %.1f 입니다.\n", grade, gradePoint);
	
	int number1 = 33;
	double number2 = 35.325;
	double result = number1 * number2;
	printf("두 수의 곱 : %lf\n", result);
	
//	943 시간은 몇일 몇시간 인지 구하여 출력하세요.
//	943시간은 39일 7시간입니다.
	int hour = 943;
	int d = hour / 24;
	int h = hour % 24;
	printf("%d시간은 %d일 %d시간입니다.\n", hour, d, h);
	
	// 가로 길이 8, 세로 길이 9인 사각형과 삼각형의 넓이를 각각 구하여 출력하세요.
	int width = 8;
	int height = 9;
	int rectangleArea = width * height;
	printf("사각형의 넓이: %d\n", rectangleArea);
	float triangleArea = width * height / 2;
	printf("삼각형의 넓이: %g", triangleArea);
}
