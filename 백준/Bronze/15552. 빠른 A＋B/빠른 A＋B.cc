#include <bits/stdc++.h>
using namespace std;
int T;
int A;
int B;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> A >> B;
        cout << A+B << "\n";
    }
    return 0;
}
