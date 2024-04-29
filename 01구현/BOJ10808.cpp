//Counting Star
//맵 또는 배열

#include <bits/stdc++.h>
using namespace std;

int a[26];
string str;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> str;
    for(char s: str) {
        a[s - 'a']++;
    }

    for(int i = 0; i < 26; i++) cout << a[i] << " ";

    return 0;
}