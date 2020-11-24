## 구조체(Structure) 설명

만약 사람 정보를 저장해야 한다고 생각해보자.  
이름, 나이, 주소 등의 정보를 저장하려면 우리가 배운 것중에 어디다 저장하면 될까?  
변수 3개를 만들어서 각각 저장하면 되지?  
배열에 넣으면 좋겠지만 3개의 타입이 이름은 String, 나이는 int, 주소는 String이다보니 배열에는 넣을 수가 없다.  
  
만약 사람이 3명이 있는데 각각 인적정보를 저장해야 한다면  
이름 변수 3개, 나이 변수 3개, 주소 변수 3개를 만들어야 하는 번거로움이 있다.  
  
사람, Person 이라는 자료형이 있어서 이름, 나이, 주소 정보를 한꺼번에 담을 수 있다면 좋겠다.  
이렇게 하나의 의미로 묶을 수 있게 해주는게 바로 구조체, Structure의 약어 Struct라고 한다.
  
개발자가 여러 변수를 하나로 묶은 새로운 자료형을 만드는 것이다.

## Struct
- [예제1](ex01/ex.c): struct 정의와 사용법
- [문제1](quiz01/README.md): 문제 4개. struct 정의와 사용

--- 학생 보여주기 ---
## 구조체(Struct) 정의 예제
* 새로운 자료형(Data type)을 직접 만드는 것이다.
```
struct Person {
    char name[10];
    int age;
    char address[100];
};
```

## 구조체(Struct) 사용하기(1)
* 출력: `변수명.속성명`으로 접근 한다.
```
struct Person {
    char name[10];
    int age;
    char address[100];
};

int main() {
    // 초기화 방법(1)
    struct Person p1 = {.name = "신보람", .age = 25, .address = "서울시 강남구"};

    // 초기화 방법(2)
    struct Person p2 = {"신바다", 10, "경기도 성남시"};

    // 출력
    printf("이름: %s\n", p2.name);
    printf("나이: %d\n", p2.age);
    printf("주소: %s\n", p2.address);
}
```

## 구조체(Struct) 사용하기(2)
* **typedef**로 정의해두면 사용시 struct 키워드를 생략할 수 있다. 
```
typedef struct _Person { 
    char name[10];
    int age;
    char address[100];
} Person;

int main() {
    // 초기화
    Person p1 = {"신바다", 10, "경기도 성남시"};    
}
```
