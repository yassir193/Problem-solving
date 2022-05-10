#include <bits/stdc++.h>
using namespace std;

string board[8];
int main() {
    for(int i=0; i<8; ++i) {
        string row;
        cin >> row;
        for(int k=0; k<8; ++k)
            if(row[k] == '*')
                board[i] = k;
    }
}
