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