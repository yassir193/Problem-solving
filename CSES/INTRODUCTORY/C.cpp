#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    string s;
    cin >> s;
    int best = 0, c = s[0], v = 0;
    for(int i = 0; i < int(s.size()); ++i) {
        if(c == s[i]) ++v;
        else v = 1, c = s[i];
        best = max(best, v);
    }
    cout << best << endl;
    return 0;
}
