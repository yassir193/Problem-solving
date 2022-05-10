#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);     
    ll n, ans = 1;
    cin >> n;
    for(int i = 0; i < n; ++i)
        ans = 2 * ans % (ll(1e9) + 7);
    cout << ans << "\n";
    return 0;
}
