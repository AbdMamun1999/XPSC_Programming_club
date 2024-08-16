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
        vector<int>visited(k+1,0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i] <= k)
                visited[a[i]] = 1;
        }
        
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            if(b[i] <= k){
                if(visited[b[i]]) visited[b[i]] = 3;
                else visited[b[i]] = 2;
            }
        }

        int cnt1 = k/2,cnt2 = k/2;
        bool flag = true;
        for (int i = 1; i <= k; i++)
        {
            // cout << visited[i] << " ";
            if(visited[i]==1) cnt1--;
            else if(visited[i]==2) cnt2--;
            else if(visited[i]==0){
                flag = false;
                break;
            }
        }
        cout << visited.size() << endl;
        // cout << endl;
        // cout << cnt1 << " " << cnt2 << endl;
        // cout << flag << endl;
        // if(flag==false) cout << "NO" << '\n';
        // else {
        //     if(cnt1 >= 0 && cnt2 >= 0) cout << "YES" << '\n';
        //     else cout << "NO" << '\n';
        // }

        
    }
    
    return 0;
}