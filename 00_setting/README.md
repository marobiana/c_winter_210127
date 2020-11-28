## C언어 개발 환경 구축

### [dev C++ 다운로드](https://sourceforge.net/projects/orwelldevcpp/)
- 설치 후 언어 > 한국어

### 저장 위치 설정
- 저장 위치: D드라이브 \ 본인 이름 \ Day01(날짜 별 폴더 관리)
- c 파일 이름 규칙
  - 예제: 예) variable_ex01
  - 퀴즈: 예) variable_quiz01

### 글자 크기 변경
편집기 설정 > 화면 탭 > 글꼴 크기 '25'

### 기본 코드 작성
```
#include<stdio.h>

int main() {
  printf("Hello, world!");

  return 0;
}
```

### 프로그램 수행 단계 
`컴파일(Compile) -> 링킹(Linking) -> 빌드(build) -> 실행(execute)`  
- 컴파일(Compile): 소스코드를 컴퓨터가 알아듣는 기계어로 바꾼다.  
  잘못된 문법이 있으면 컴파일 되지 않음(컴파일 에러)  
- 링킹(Linking): 운영체제와 프로그램 간의 연결(라이브러리도 함께 연결)
- 빌드(build): 컴파일과 링킹 과정을 아울러서 실행파일이 나오게 하는 것
- 실행(execute): 실행파일(프로그램)을 수행함