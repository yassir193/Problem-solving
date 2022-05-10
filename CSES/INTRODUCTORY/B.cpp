#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n, a;
    cin >> n;
    ll ans = n * (n + 1) / 2;
    while(--n) {
        cin >> a;
        ans -= a;
    }
    cout << ans << endl;
    return 0;
}
