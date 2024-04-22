#include <bits/stdc++.h>
using namespace std;

int n;
int x;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> n >> x;

    int a[n];

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        a[i] = num;

        if (num<x) {
            cout << num << " ";
        }
    }

    return 0;
}