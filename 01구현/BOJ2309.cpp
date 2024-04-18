//조합 문제
//9명 중 7명을 뽑는 문제

//Solution1.
//순열(next_permutation) 사용
#include <bits/stdc++.h>
using namespace std;

int a = 0, sum = 0;
vector<int> heights;

int main() {
    for(int i = 0; i < 9; i++) {
        cin >> a;
        heights.push_back(a);
    }
    
    sort(heights.begin(), heights.end());

    do{
        for(int i = 0; i < 7; i++) {
            sum += heights[i];
        }
        if(sum == 100) {
            for(int i = 0; i < 7; i++) {
                cout << heights[i] << "\n";
            }
            return 0;
        }
        sum = 0;
    }while(next_permutation(heights.begin(), heights.end()));

}

//Solution2.
//전체 9명 합 중, 2명을 뺐을 때 합이 100이면 된다.
#include <bits/stdc++.h>
using namespace std;

int a[9];
int sum = 0;
pair<int, int> ret;
vector<int> v;

void solve();

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    solve();
    for(int i = 0; i < 9; i++) {
        if(ret.first == i || ret.second == i) continue;
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());
    for(int i : v) cout << i << "\n";

    return 0;
}

void solve() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < i; j++) {
            if(sum - a[i] - a[j] == 100) {
                ret.first = i;
                ret.second = j;
                return;
            }
        }
    }
}