**재귀함수**

1. 종료조건

2. 로직

3. 다시 호출

* 정의 단계에서 자신을 재참조하는 함수
* 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수
* 보통 큰 문제를 작은 부분 문제로 나눠서 풀 때 쓰인다.

<br>

**주의사항**

* 반드시 기저사례를 써야 한다. (종료조건)
* 사이클이 있다면 쓰면 안된다.
* 반복문으로 될 거같으면 반복문으로. (함수 호출에 따른 코스트)

<br>

**예시**

* 팩토리얼
* f(n) = n * n-1 * n-2 ...
* f(n - 1) = n-1 * n-2 * ...
* => f(n) = n * f(n - 1)

<br>

* 피보나치
* F0 = 0, F1 = 1
* Fn = Fn-1 + Fn-2

<br>

```cpp
#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int fibo(int n) {
    if(n == 0 || n == 1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

int n = 5;
int main(){
    cout << fact(n) << " " << fibo(n) << "\n";
    return 0;
}
```

