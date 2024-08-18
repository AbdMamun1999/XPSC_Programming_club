#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int idx1 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B'){
                break;
            }
            idx1++;
        }

        int idx2 = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i]=='B'){
                break;
            }
            idx2++;
        }

        cout << n - (idx1+idx2) << '\n';
    }
    
    
    return 0;
}