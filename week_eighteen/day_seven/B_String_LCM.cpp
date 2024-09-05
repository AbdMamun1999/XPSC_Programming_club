#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    return __gcd(a,b);
}

int lcm(int a, int b){
    return (a/gcd(a,b))*b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin >> a >> b;

        int n = a.size(),m = b.size();

        int x = gcd(m,n);
        string s = a.substr(0,x);
        
        bool flag = true;
        for (int i = 0; i < n; i+=x)
        {
            if(a.substr(i,x)!=s){
                flag = false;
                break;
            }
        }

        for (int i = 0; i < m; i+=x)
        {
            if(b.substr(i,x)!=s){
                flag = false;
                break;
            }
        }


        if(flag) {
            int y = lcm(n,m);
            x = y/x;
            for (int i = 0; i < x; i++)
            {
                cout << s;
            }
            cout << '\n';
        }
        else cout << -1 << '\n';
    }
    
    

    return 0;
}