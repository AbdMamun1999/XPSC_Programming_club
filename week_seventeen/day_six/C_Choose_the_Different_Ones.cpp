#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        int a[n],b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<int>n1(k+1,0);
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= k){
                n1[a[i]] = 1;
            }
        }

        vector<int>n2(k+1,0);
        for (int i = 0; i < m; i++)
        {
            if(b[i] <= k){
                n2[b[i]] = 1;
            }
        }

        int cnt1 = 0,cnt2 = 0;

        for (int i = 1; i <= k; i++)
        {
            if(n1[i]==1)cnt1++;
        }

        for (int i = 1; i <= k; i++)
        {
            if(n2[i]==1)cnt2++;
        }
        

        if((cnt1 > k/2 && cnt2 > k/2) || (cnt1 == k/2 && cnt2 > k/2) || (cnt1 > k/2 && cnt2 == k/2)) cout << "YES" << '\n';
        else if(cnt1==k/2 && cnt2==k/2)
        {
            vector<int>res(k+1,0);
            for (int i = 1; i <= k; i++)
            {
                if(n1[i]==1) res[i]=1;
            }

            for (int i = 1; i <= k; i++)
            {
                if(n2[i]==1) res[i]=1;
            }

            int cnt = 0;
            for (int i = 1; i <= k; i++)
            {
                if(res[i]==1)cnt++;
            }


            if(cnt == k) cout << "YES" << '\n';
            else cout << "NO" << '\n';
            
            
        }
        else cout << "NO" << '\n';
    }
    return 0;
}