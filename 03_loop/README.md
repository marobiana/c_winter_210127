# 조건문 > 반복문

https://docs.google.com/document/d/1tB0DMsASpYd2AKBBBSiM4Kk6e-Uvnwiif22aSodgvlI/edit  

## while문과 복합 대입 연산자
- [예제1](ex01/ex01.c) : while 반복문, 복합 대입 연산자, 합계, 무한루프
- [문제1](quiz01/README.md) : 문제 4개 while

## do-while 문 생긴거 잠깐 보여주고 말기
## for문
- [에제2](ex02/ex02.c) : for 반복문
- [문제2](quiz02/README.md) : 문제 5개 for

### break, continue 문
- 반복문을 중단시키는 방법은 조건이 거짓일 때, 그리고 하나 더 있다. 원하는 위치에서 break문을 써주는 것이다.
- [예제3](ex03/ex03.py) : break문, continue문
- [문제3](quiz03/README.md) : 문제 1개 break

## 종합 문제
- [문제4](quiz04/README.md) : 문제 3개 for나 while을 사용

--- 학생 보여주기 --- 

### 복합 대입 연산자(Assignment Operators)
|복합 대입연산자|등치|설명|
|------|------|------|
|a += b| a = a + b|a에 b를 더해서 a에 저장|
|a -= b| a = a - b|a에 b를 빼서 a에 저장|
|a *= b| a = a * b|a에 b를 곱해서 a에 저장|
|a /= b| a = a / b|a에 b를 나눠서 a에 저장|
|a %= b| a = a % b|a에 b를 나눈 나머지를 a에 저장|

## 증감 연산자
|증감 연산자|등치|설명|
|------|------|------|
|++i|i = i + 1|전위 연산자. 먼저 i의 값을 1 증가시킨다. |
|i++||후위 연산자. 다음 줄에서 i의 값을 1 증가시킨다. |
|--i|i = i - 1|전위 연산자. 먼저 i의 값을 1 감소시킨다. |
|i--||후위 연산자. 다음 줄에서 i의 값을 1 감소시킨다. |