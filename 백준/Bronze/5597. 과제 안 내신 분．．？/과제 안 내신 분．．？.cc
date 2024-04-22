// 과제 안 내신 분..?

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> v;
    for (int i = 0; i<28; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i<31; i++) {
        if (find(v.begin(), v.end(), i) == v.end()) {
            cout << i << "\n";
        }
    }

    return 0;
}