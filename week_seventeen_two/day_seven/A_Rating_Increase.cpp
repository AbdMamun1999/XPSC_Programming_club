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

        int n = s.size();
        int x,y;
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            

            string a = s.substr(0,i);
            string b = s.substr(i,n-i);

            x = stoi(a);
            y = stoi(b);

            if(a[0]!='0' && b[0]!='0'&&x < y && a+b == s){
                flag = true;
                break;
            }
            
        }

        if(flag) cout << x << " " <<y << '\n';
        else cout << -1 << '\n';
        
    }
    
    
    return 0;
}