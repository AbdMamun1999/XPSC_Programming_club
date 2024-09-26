#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t,n,i,j,cost,m,last,l;

    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        n = a.size();

        vector<ll>index[26];
        vector<ll>ans;
        m = 0;

        for ( i = 0; i < n; i++)
        {
            index[a[i]-97].push_back(i+1);
        }
        
        cost = abs(a[0]-a[n-1]);
        if(a[n-1]>a[0]){
            for ( i = a[0]-97; i <= a[n-1]-97; i++)
            {
                l = index[i].size();
                m=m+l;

                for ( j = 0; j < l; j++)
                {
                    ans.push_back(index[i][j]);
                } 
            }
        }else{
            for ( i = a[0]-97; i >= a[n-1]-97; i--)
            {
                l = index[i].size();
                m=m+l;

                for ( j = 0; j < l; j++)
                {
                    ans.push_back(index[i][j]);
                } 
            }
        }

        cout << cost << " " << m << '\n';

        for (auto val : ans)
        {
            cout << val << " ";
        }
        
        cout << '\n';
    }
    
    
    return 0;
}