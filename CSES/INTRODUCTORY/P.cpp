#include <bits/stdc++.h>
#define ll long long
using namespace std;


int p[20], n;
int main(void) {
    cin >> n;
    ll ans = 0;
    for(int i=0; i<n; ++i)
        cin >> p[i], ans += p[i];

    for(int mask = 0; mask < (1 << n); ++mask) {
        ll g1 = 0, g2 = 0;
        for(int i=0; i<n; ++i)
            mask & (1 << i) ? g1 += p[i] : g2 += p[i];
        ans = min(abs(g1-g2), ans);
    }
    cout << ans << "\n";
    return 0;
}
