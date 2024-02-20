**C++ 기본**

1. cpp 파일 실행하기

   * a.cpp

     ```cpp
     #include <bits/stdc++.h> // C++의 모든 표준 라이브러리가 포함된 헤더 파일
     using namespace std; //std라는 네임스페이스 사용. 많은 라이브러리를 사용하다보면 변수명 중복이 발생할 수 있는데, 이를 방지하기 위해 변수명에 범위를 걸어놓는다.
     
     int main() {
         cout << "hello" << "\n";
         return 0; //main 함수 종료. 프로세스를 정상적으로 마무리한다는 의미
     }
     ```

   * a.cpp 파일을 엄격하게(-Wall) C++14버전으로 컴파일해서 test.out 이라는 파일을 만든다.

     ```cpp
     g++ -std=c++14 -Wall a.cpp -o test.out
     ```

   * test.out 파일을 실행한다.

     ```cpp
     ./test.out
       
     /*
     hello
     */
     ```
     

<br>

2. 입력받은 문자열 그대로 출력

   * 1-2.cpp

     ```cpp
     #include <bits/stdc++.h> 
     using namespace std;
     
     string a;
     
     int main() {
         cin >> a;
         cout << a << "\n";
         return 0;
     }
     
     /*
     wow
     wow
     */
     ```

<br>

3. typedef

   * typedef를 통해 타입의 이름을 별칭으로 정의

   * `typedef <타입> <별칭>`

   * 1-3.cpp

     ```cpp
     #include <bits/stdc++.h>
     using namespace std;
     
     typedef int i;
     
     int main() {
         i a = 1;
         cout << a << "\n";
         return 0;
     }
     
     /*
     1
     */
     ```

<br>

4. define

   * define을 통해 상수, 매크로를 정의

   * `#define <이름> <값>`

   * 1-4.cpp

     ```cpp
     #include <bits/stdc++.h>
     using namespace std;
     
     #define PI 3.14159
     #define loop(x, n) for(int x = 0; x < n; x++)
     
     int main() {
         cout << PI << "\n";
         int sum = 0;
         loop(i, 10) {
             sum += i;
         }
         cout << sum << "\n";
         return 0;
     }
     
     /*
     3.14159
     45
     */
     ```

<br>

5. STL

   * Standard Template Library
   * 자료구조, 함수 등을 제공하는 라이브러리

   * **알고리즘**
     * 정렬, 탐색 등에 관한 함수. sort()가 대표적
   * **컨테이너**
     * 시퀀스 컨테이너(sequence container)
       * 데이터를 단순히 저장해 놓는 자료구조
       * array, vector, deque, forward_list, list
     * 연관 컨테이너(associative container)
       * 자료가 저장됨에 따라 자동 정렬 되는 자료구조
       * 중복키가 가능한 것은 이름에 multi가 붙음
       * set, map, multiset, multimap
     * 정렬되지 않은 연관 컨테이너(unordered associative container)
       * 자료가 저장됨에 따라 자동 정렬 되지 않는 자료구조
       * unordered_set, unordered_map, unordered_multiset, unordered_mutimap
     * 컨테이너 어댑터(container adapter)
       * 시퀀스 컨테이너를 이용해 만든 자료구조
       * stack, queue는 deque로 만들어짐
       * priority_queue는 vector를 이용해 힙 자료구조로 만듦

   * **이터레이터**

   * **펑터**
     * 함수 호출 연산자를 오버로드하는 클래스의 인스턴스