// 문자열 폭발

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string str;
    string bomb;

    cin >> str;
    cin >> bomb;

    stack<int> s;
    string ans;

    for (int i=0; i<str.length(); i++) {
        s.push(str[i]);

        if (str[i] == bomb[bomb.length()-1] && s.size() >= bomb.length()) {
            string temp;
            for (int j=0; j<bomb.length(); j++) {
                temp.push_back(s.top());
                s.pop();
            }
            reverse(temp.begin(), temp.end());
            if (temp.compare(bomb) != 0) {
                for (int i=0; i<bomb.length(); i++) {
                    s.push(temp[i]);
                }
            }
        }
    }

    while(!s.empty()) {
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());

    if (ans.empty()) {
        cout << "FRULA" << "\n";
    } else {
        cout << ans << "\n";
    }

    return 0;
}