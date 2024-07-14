#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if(s=="bca"||s=="cab")cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    
    
    return 0;
}