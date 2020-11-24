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

## 문제
### [문제 1](10_structure/quiz01) : 구조체 사용
