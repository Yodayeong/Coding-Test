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

<br>

6. 입력과 출력

   * 입력

     * cin: 개행문자(띄어쓰기, 엔터) 직전까지 입력을 받음

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       string a;
       
       int main() {
           cin >> a;
           cout << a << "\n";
           return 0;
       }
       ```

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       string a, b;
       
       int main() {
           cin >> a >> b;
           cout << a << "\n";
           cout << b << "\n";
           return 0;
       }
       ```

     * scanf: 형식을 지정해서 입력을 받음

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       int a;
       double b;
       char c;
       
       int main() {
           scanf("%d %lf %c", &a, &b, &c);
           printf("%d\n", a);
           printf("%lf\n", b);
           printf("%c\n", c);
           return 0;
       }
       ```

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       int a, b;
       double c;
       
       int main() {
           scanf("%d.%d", &a, &b);
           printf("\n%d %d\n", a, b);
       
           scanf("%lf", &c);
           printf("%lf\n", c);
           return 0;
       }
       ```

     * getline: 개행문자('\n')을 줄의 끝으로 인식하고 그 개행문자 직전까지 입력을 받음

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       string s;
       
       int main() {
           getline(cin, s);
           cout << s << "\n";
           return 0;
       }
       ```

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       string s;
       
       int main() {
           getline(cin, s, '.');
           cout << s << "\n";
           return 0;
       }
       ```

     * getline으로 입력받을 때 주의할 점: cin으로 입력을 받을 때, 개행문자 직전까지 입력을 받기 때문에, 중간에 위치한 버퍼에 \n이 남게 된다. 그래서 bufferflush로 이 버퍼의 개행문자를 없애줘야 한다.

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       int T;
       string s;
       
       int main() {
           cin >> T;
           string bufferflush;
           getline(cin, bufferflush);
           for(int i = 0; i < T; i++) {
               cin >> s;
               cout << s << "\n";
           }
           return 0;
       }
       ```

   * 출력

     * cout

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       string a = "여다영 화이팅! ";
       string b = "잠온다...";
       
       int main() {
           cout << a << "\n";
           cout << a << " " << "" << b << "\n";
           return 0;
       }
       ```

     * 이때, cout은 실수 타입을 일부분만 출력한다. cout.precision(자릿수 + 1);을 통해 원하는 자릿수까지 반올림해서 출력하자.

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       typedef long long ll;
       double a = 1.23456789;
       
       int main() {
           cout << a << "\n";
           cout.precision(3);
           cout << a << "\n";
           cout.precision(8);
           cout << a << "\n";
           return 0;
       }
       ```

     * printf: 형식을 지정해서 출력할 때 좋다.

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       int a = 1, b = 2;
       
       int main() {
           printf("홍철 %d : 지수 %d\n", a, b);
           return 0;
       }
       ```

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       typedef long long ll;
       double a = 1.23456789;
       int b = 12;
       int c = 2;
       
       int main() {
           printf("%.6lf\n", a);
           printf("%02d\n", b);
           printf("%02d\n", c);
           return 0;
       }
       ```

       ```cpp
       #include <bits/stdc++.h>
       using namespace std;
       
       int a = 1;
       char s = 'a';
       string str = "어벤져스";
       double b = 1.223123;
       
       int main() {
           printf("아이엠어 아이언맨 : %d\n", a);
           printf("아이엠어 아이언맨 : %c\n", s);
           printf("아이엠어 아이언맨 : %s\n", str.c_str()); //string은 포인터 타입으로 바꿔줘야 하기 때문!
           printf("아이엠어 아이언맨 : %lf\n", b);
       }
       ```

       