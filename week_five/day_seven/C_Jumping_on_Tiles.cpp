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
        string s;
        cin >> s;

        int n = s.size();
        map<char,vector<int>>ch_idx;
        for (int i = 0; i < n; i++)
        {
            ch_idx[s[i]].push_back(i+1);
        }

        int m = 0;
        vector<int>ans;
        if(s[n-1]>s[0]){
            for (char i = s[0]; i <= s[n-1]; i++)
            {
                int size = ch_idx[i].size();
                m+=size;
                for (auto val : ch_idx[i])
                {
                    ans.push_back(val);
                }
            }
        }else{
            for (char i = s[0]; i >= s[n-1]; i--)
            {
                int size = ch_idx[i].size();
                m+=size;
                for (auto val : ch_idx[i])
                {
                    ans.push_back(val);
                }
            }
        }
        
        int cost = abs(s[0]-s[n-1]);

        cout << cost << " " << m << '\n';
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    
    
    return 0;
}