// 괄호

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    stack<int> s;
    int t;
    string str;
    int count = 0;

    cin >> t;

    for (int i=0; i<t; i++) {
        cin >> str;

        s = {};
        for (int j=0; j<str.size(); j++) {   

            if (str[j] == 40) {
                s.push(str[j]);
            } else if (str[j] == 41) {
                if (s.empty()) {
                    s.push(str[j]);
                    break;
                } else {
                    s.pop();
                }
            } else {
                s.pop();
            }
        }

        if (s.empty()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}