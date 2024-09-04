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

        int idx = 0;
        bool flag = false;
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]=='0' && s[i+1]!='0'){
                idx = i;
                flag = true;
                break;
            }
        }

        if(flag){
            if(stoi(s.substr(0,idx+1)) < stoi(s.substr(idx,s.size()))){
                cout << stoi(s.substr(0,idx+1)) << " " << stoi(s.substr(idx,s.size())) << '\n';
            }else cout << -1 << '\n';
        }else{
            if(stoi(s.substr(0,1)) < stoi(s.substr(1,s.size()))){
                cout << stoi(s.substr(0,1)) << " " << stoi(s.substr(1,s.size())) << '\n';
            }else cout << -1 << '\n';
        }
    
    }
    
    
    return 0;
}