#include <bits/stdc++.h>
using namespace std;

int a[27];
int main(void) {
    string s;
    cin >> s;
    for(char c : s)
        ++a[c-'A'];
    int index = -1;
    for(int i=0; i<27; ++i) {
        if(a[i] % 2) {
            if(index != -1) {
                cout << "NO SOLUTION\n";
                return 0;
            } else {
                index = i;
            }
        }
    }   
    string ans = index != -1 ? string(a[index], index+'A'):"";
    for(int i = 0; i < 27; ++i) {
        if(index == i)
            continue;
        string tmp = string(a[i]/2, i+'A');
        ans = tmp + ans + tmp;
    }
    cout << ans << "\n";
    return 0;
}
