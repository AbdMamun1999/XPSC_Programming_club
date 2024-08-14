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
        string s;
        cin >> s;

        bool flag0 = true,flag1 = true;
        int cnt0 = 0,cnt1 = 0;
        for (auto ch : s)
        {
            if(ch=='0'){
                if(flag0){
                    cnt0++;
                    flag0 = false;
                }
            }else{
                if(flag1){
                    cnt1++;
                    flag0 = true;
                }
            }
        }

        if(cnt0 >= cnt1) cout << "No" << '\n';
        else cout << "Yes" << '\n';
    }
    
    
    return 0;
}