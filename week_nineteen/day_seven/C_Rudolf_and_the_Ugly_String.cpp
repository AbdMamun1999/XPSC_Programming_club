#include <bits/stdc++.h>
#define ll long long
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

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p')cnt++,i+=2;
            else if(s[i]=='p' && s[i+1]=='i'&& s[i+2]=='e')cnt++,i+=2;
        }

        cout << cnt << '\n';
    }
    
    
    return 0;
}