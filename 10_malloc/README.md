## 동적 메모리할당(allocation) 설명

### 컴파일 타임 vs 런타임 설명

## Struct
- [예제1](ex01/ex.c): struct 정의와 사용법
- [문제1](quiz01/README.md): 문제 4개. struct 정의와 사용

--- 학생 보여주기 ---
#### 컴파일 타임
* 개발자가 소스 코드를 작성 하는 단계를 의미한다. 
* 컴파일 타임에서는 상수, 명령 실행 순서와 조건 등만 결정이 된다. 
* 코드를 작성하고, 컴파일 까지의 상황을 의미하고, 이떄 발생하는 에러를 컴파일 에러라고 한다. 
* 컴파일 타임 에러는 컴파일러가 문제를 모두 확인해 주기 때문에, 문제 파악이 크게 어렵지 않다.

#### 런타임
* 컴파일이 끝나고 실행 파일이 만들어져서, 실행 파일에 의해서 프로그램이 실행 되고 있는 단계를 의미한다. 
* 실제 실행되는 변수, 조건, 반복등은 런타임에서 결정된다.
* 런타임 상황에서, 소스 코드의 문제로 실행 중간에 에러가 발생 하는 경우 런타임 에러라고 한다. 
  * 일반적으로 프로그램을 사용하면서 발생 하는 문제는 런타임 에러에 해당한다.
* 런타임 에러는 정확한 문제 위치와 원인 파악이 쉽지 않아서 해결이 쉽지 않다. 

## 배열
```
int numbers[5];
```
- 배열의 크기는 처음에 지정해 주어야 한다.
- *컴파일 타임*에 결정된다.
- 배열의 크기를 명확하게 얼마나 사용 할지 모를 떄는 필요 이상의 메모리를 미리 선언해야 하고 쓰지 않는 메모리를 낭비하게 된다.

## malloc
```
int *numbersPointer = (int *)malloc(n*4);   // 입력받은 배열사이즈 n * int의 사이즈 4byte
numbersPointer[0] = 4;
numbersPointer[1] = 5;
numbersPointer[2] = 3;
numbersPointer[3] = 6;
numbersPointer[4] = 2;
```
- 배열을 동적으로 할당 하는 방법: malloc
- *동적 메모리 할당*
- *런타임*에 결정된다.
- malloc은 void Pointer이므로 숫자 배열을 만들거면 int *로 캐스팅 해야 한다.

## sizeof
- 자료형마다 몇 byte 공간인지 일일이 넣는 것은 불편하다.
- 운영체제마다 자료형에 대한 공간 크기가 다르다.
- 타입에 따라 크기를 알아 낼 수 있는 *sizeof*를 사용한다.

```
printf("%d\n", sizeof(int));
printf("%d\n", sizeof(char));
printf("%d\n", sizeof(long));
printf("%d\n", sizeof(float));
```

> 출력 예시(실행 환경에 따라서 값이 다르게 출력될 수 있다.)
```
4
1
8
4
```

> 5개의 int 배열 동적 할당
```
int *numbersPointer = (int *)malloc(sizeof(int) * 5);
```

## 메모리 해제
- 동적으로 할당된 메모리는 일반 변수들과 다르게 수동으로 메모리를 반환해야 한다.
```
free(numbersPointer);   // 동적 변수에 대해 한번만 해제한다.
```

## 메모리 해제를 안하고 재사용 하면...
```
int *numbersPointer = (int *)malloc(sizeof(int) * 4); // 우주 미아
printf("%p\n", numbersPointer);
    
numbersPointer = (int *)malloc(sizeof(int) * 4);
printf("%p\n", numbersPointer);
```
- 위에서 가리키던 공간은 아무도 가리키지 않는 상태가 되어 해제할 수 없어진다.
- 재사용 할 때는 반드시 free를 해주자!
