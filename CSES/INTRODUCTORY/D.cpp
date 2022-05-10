#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, ans(0), pv(0);
    cin >> n;
    while(n--) {
        ll x;
        cin >> x;
        pv = max(pv, x);
        ans += pv - x;
    }
    cout << ans << endl;
    return 0;
}
