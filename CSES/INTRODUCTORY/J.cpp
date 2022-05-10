#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);    
    int n, ans = 0;
    cin >> n;
    for(int i = 5; i <= n; i *= 5)
        ans += n / i;
    cout << ans << "\n";
    return 0;
}
