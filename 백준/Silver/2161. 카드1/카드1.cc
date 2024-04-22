// 카드1

#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    queue<int> q;

    for (int i=1; i<n+1; i++) {
        q.push(i);
    }

    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
        q.push(q.front()); 
        q.pop();
    }

    cout << q.front() << "\n";
}