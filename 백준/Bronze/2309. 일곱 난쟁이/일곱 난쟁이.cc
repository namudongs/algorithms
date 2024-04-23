// 일곱 난쟁이
/*
1. 아홉 번의 입력을 받는다.
2. 입력 받은 값을 벡터에 넣는다.
3. 벡터를 순회하며 합이 100이 되는 경우를 찾는다.
*/

#include <bits/stdc++.h>
using namespace std;

bool isCorrect = false;
void print(vector<int> v, vector<int> ans) {
    if (isCorrect) {
        return;
    }

    int sum = 0;
    for (int i : v) {
        sum += ans[i];
    }
    // cout << "\n";

    
    if (sum == 100) {
        for (int i : v) {
            cout << ans[i] << "\n";
        }
        isCorrect = true;
        return;
    }
}

void combi(int start, vector<int> v, vector<int> ans) {
    if (v.size() == 7) {
        print(v, ans);
        return;
    }

    for (int i=start+1; i<9; i++) {
        v.push_back(i);
        combi(i, v, ans);
        v.pop_back();
    }
    return;
}

int main() {
    cin.tie(NULL); ios_base::sync_with_stdio(false);

    vector<int> v;
    vector<int> ans;

    for (int i=0; i<9; i++) {
        int tmp;
        cin >> tmp;
        ans.push_back(tmp);
    }
    sort(ans.begin(), ans.end());

    combi(-1, v, ans);
    return 0;
}