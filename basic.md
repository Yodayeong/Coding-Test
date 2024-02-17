**C++ 기본**

1. cpp 파일 실행하기

   * a.cpp

     ```cpp
     #include <bits/stdc++.h>
     using namespace std;
     
     int main() {
         cout << "hello" << "\n";
         return 0;
     }
     ```

   * a.cpp 파일을 엄격하게(-Wall) C++14버전으로 컴파일해서 test.out 이라는 파일을 만든다.

     ```cpp
     g++ -std=c++14 -Wall a.cpp -o test.out
     ```

   * test.out 파일을 실행한다.

     ```cpp
     ./test.out
     ```

     