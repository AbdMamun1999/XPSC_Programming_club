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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int even = 0,odd = 0;
        vector<int>od,evn;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                evn.push_back(i);
                even++;
            }
            else {
                od.push_back(i);
                odd++;
            }
        }

        vector<int>ans;
        if(odd == 1 && even>=2) {
            cout << "YES"<<'\n';
            ans.push_back(od[0]);
            ans.push_back(evn[0]);
            ans.push_back(evn[1]);
        }
        else if(odd >= 2 && even >= 2){ 
            cout << "YES" << '\n';
            ans.push_back(od[0]);
            ans.push_back(evn[0]);
            ans.push_back(evn[1]);
        }
        else if(odd >= 3) {
            cout << "YES" << '\n';
            ans.push_back(od[0]);
            ans.push_back(od[1]);
            ans.push_back(od[2]);
        }
        else cout << "NO";

        sort(ans.begin(),ans.end());

        for (auto val : ans)
        {
            cout << val+1 << " ";
        }

        cout << "\n";
    
    }
    
    
    
    
    return 0;
}