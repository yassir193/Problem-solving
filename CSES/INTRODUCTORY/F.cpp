#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y;
        cin >> y >> x;
        ll mx = max(x, y), mn = min(x, y);
        if((x == mx && x % 2 == 0)||(mx == y && y % 2 != 0))
            cout << (mx-1) * (mx-1) + mn << "\n";
        else
            cout << mx * mx - mn + 1 << "\n";
    }
    return 0;
}
