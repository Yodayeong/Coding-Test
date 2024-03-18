#include <bits/stdc++.h>
using namespace std;

int main() {
    //push_back()은 문자를 하나씩 밖에 더하지 못하지만,
    //+=는 문자열 또는 문자를 더할 수 있다.
    string a = "love is";
    a += " pain!"; 
    cout << a << "\n";

    //pop_back(): 문자열의 끝을 지운다.
    //O(1)의 시간복잡도를 가진다.
    a.pop_back();

    //size(): 문자열의 사이즈를 반환한다.
    //O(1)의 시간복잡도를 가진다.
    cout << a << ":" << a.size() << "\n";

    //begin(): 문자열의 첫번째 요소를 가리키는 이터레이터를 반환한다.
    //*를 통해 해당 위치의 값을 가져온다.
    cout << char(* a.begin()) << "\n";
    //end(): 문자열의 마지막 요소 그 다음을 가리키는 이터레이터를 반환한다.
    cout << char(* (a.end() -1)) << "\n";
}