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

        if(n==1) cout << 1 << '\n';
        else if(n == 2) cout << 2 << " " << 1 << '\n';
        else{
            vector<int>a(n,-1);
            a[0] = 2;
            a[n/2] = 1;
            a[n-1] = 3;

            int val = 4;
            for (int i = 1; i < n; i++)
            {
                if(a[i]!=-1)continue;
                a[i]=val++;
            }
            
            for (auto i : a)
            {
                cout << i << " ";
            }

            cout << '\n';
            
        }
    }
    
    return 0;
}