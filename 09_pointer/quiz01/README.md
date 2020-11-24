## 문제) 포인터 기본

### 1. 변수 주소
* 포인터 변수 없이 number변수의 주소를 출력하세요.  
`int num = 5983;`

> 출력 예시 

```
주소 : 0x7ffeefbff49c
```

### 2. 포인터 변수

* 아래 변수를 포인터 변수를 통해서 아래와 같이 출력하세요.  

`int num2 = 15;`

> 출력 예시 

```
주소: 0x7ffeefbff49c
값: 15
```


### 3. 포인터 변수 사용
* 아래 두 개의 변수를 직접 출력하지 않고, 포인터 변수를 통해서 아래와 같이 출력하세요.

```
int number1 = 15;
int number2 = 45;
```

> 출력 예시 

```
number1의 값: 15 
number2의 값: 54 
```


### 4. 포인터 변수 사용

* 포인터 변수를 통해서 두 변수의 값을 변경하고 출력하세요. 

```
int number3 = 15;
int number4 = 45;

// TODO: 포인터 변수 선언하기
// TODO: 포인터 변수를 통해 number3, number4 값 변경하기

printf("number1 의 값 : %d \n", number3);
printf("number2 의 값 : %d \n", number4);
```

> 출력 예시 

```
number3의 값: 24 
number4의 값: 36
```


[정답 보기](quiz01.c)
