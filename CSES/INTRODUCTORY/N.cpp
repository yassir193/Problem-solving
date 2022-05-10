#include <bits/stdc++.h>
using namespace std;

void solve(int n, int s, int d, int a) {
    if(n == 0) return;
    solve(n-1, s, a, d);
    cout << s << " " << d << "\n";
    solve(n-1, a, d, s);
}

int main(void) {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << "\n";
    solve(n, 1, 3, 2);
    return 0;
}
