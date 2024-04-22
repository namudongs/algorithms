#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    cin.ignore();

    for (int i=0; i<n; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);

        string cmd;
        ss >> cmd;

        if (cmd=="push") {
            int x;
            ss >> x;
            s.push(x);
        } else if (cmd=="pop") {
            if (s.empty()) {
                cout << -1 << "\n";
            } else {
                cout << s.top() << "\n";
                s.pop();
            }
        } else if (cmd=="size") {
            cout << s.size() << "\n";
        } else if (cmd=="empty") {
            if (s.empty()) {
                cout << 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        } else if (cmd=="top") {
            if (s.empty()) {
                cout << -1 << "\n";
            } else {
                cout << s.top() << "\n";
            }
        }

    }
    return 0;
}