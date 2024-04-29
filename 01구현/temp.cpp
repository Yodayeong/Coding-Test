//a의 개수, b의 개수, ... z의 개수

#include <bits/stdc++.h>
using namespace std;

int a[27];
string s;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    for(int i = 1; i <= 26; i++) {
        a[i] = 0;
    }

    for(int i = 0; i < s.length(); i++) {
        a[s[i] - 96] += 1;
    }
}