#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll s = n*(n+1)/2;
    if(s % 2) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    s /= 2;
    unordered_set<int> ans;
    for(int i=n; i>=1; --i) {
        if(s-i >= 0) {
            ans.insert(i);
            s -= i;
        }
    }
    cout << ans.size() << "\n";
    for(ll a:ans)
        cout << a << " ";
    cout << "\n" << n-ans.size() << "\n";
    for(ll a=1; a<=n; ++a)
        if(ans.count(a) == 0)
            cout << a << " "; 
}
