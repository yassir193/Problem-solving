#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n;
    cin >> n;
    if(n < 4 && n > 1)
        cout << "NO SOLUTION\n";
    for(int i = 2; i <= n; i += 2)
        if(i % 2 == 0)
            cout << i << " ";
    for(int i = 1; i <= n; i += 2)
        if(i % 2)
            cout << i << " ";
    return 0;
}
