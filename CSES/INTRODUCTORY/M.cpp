#include <bits/stdc++.h>
using namespace std;

#define ll long long

string to_binary(int x, int n) {
    string ans(n, '0');
    for(int i = 0; i < n; ++i) {
        int e = 1 << (n-1-i);
        if(x - e >= 0)
             x -= e, ans[i] = '1';
    }
    return ans;
}

int main(void) {
    int n;
    cin >> n;
    for(int i = 0, top = 1 << n; i < top; ++i) {
        string binary = to_binary(i, n), ans = binary;
        for(int i = 1; i < n; ++i)
            ans[i] = binary[i] ^ binary[i-1] ? '1':'0';
        cout << ans << "\n";
    }
    return 0;
}
