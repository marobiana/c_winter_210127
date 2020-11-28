## 문제) 2차원 배열 다루기

아래 배열은 5명의 10과목 시험 성적을 정리한 것 입니다. 
이 배열을 이용해서 아래 문제를 풀어보세요. 

```
int scores[5][10] = {
    {89, 93, 91, 93, 92, 78, 90, 90, 93, 90},
    {91, 82, 72, 98, 92, 87, 77, 87, 74, 88},
    {98, 93, 94, 91, 97, 94, 91, 96, 98, 90},
    {65, 63, 57, 87, 88, 92, 78, 85, 100, 68},
    {45, 50, 48, 63, 67, 58, 40, 66, 47, 64}
};
```

### 1. 학생별 평균 구하기

* 각 학생의 평균을 각각 구해서 출력하세요.
* 평균은 소수점 첫째 자리까지만 출력하세요.

> 출력

```
1번째 학생의 평균은 89.9점 입니다. 
2번째 학생의 평균은 84.8점 입니다. 
3번째 학생의 평균은 94.2점 입니다. 
4번째 학생의 평균은 78.3점 입니다. 
5번째 학생의 평균은 54.8점 입니다. 
```

### 2. 학생별 최고점 구하기
* 각 학생의 최고 점수를 구해서 출력 하세요.

> 출력

```
1번째 학생의 최고점은 93점 입니다. 
2번째 학생의 최고점은 98점 입니다. 
3번째 학생의 최고점은 98점 입니다. 
4번째 학생의 최고점은 100점 입니다. 
5번째 학생의 최고점은 67점 입니다. 
```

### 3. 평균 최고점 구하기
* 평균이 가장 높은 학생의 평균점수와 몇 번째 학생인지 출력하세요.
* 평균은 소수점 첫째 자리까지만 출력하세요.

> 출력

```
평균이 가장 높은 학생은 3번째 학생이고, 평균은 94.2점 입니다. 
```

### 4. 특정 과목 최고점
* 4번째 과목의 최고 성적의 학생이 몇 번째 학생인지와 점수를 출력하세요.


> 출력

```
4번째 과목의 최고 성적자는 2번째 학생이고, 점수는 98점 입니다.
```

### 5. 일부 평균 최고점
* 시험과목 index 3~7 의 평균이 가장 높은 학생의 index를 구하여 출력하세요.
* 평균은 소수점 첫째 자리 까지만 출력 하세요.

> 출력

```
3~7 과목 평균이 가장 높은 학생은 3번째 학생이고, 평균은 93.8입니다. 
```

[정답 보기](quiz02.c)