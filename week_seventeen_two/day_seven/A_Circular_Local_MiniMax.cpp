sort(ar,ar+1);

        vector<int> ans(n+2);
        int cnt = 0;
        for (int i = 0; i < n; i+=2)
        {
            ans[i] = ar[cnt];
            cnt++;
        }

        for (int i = 1; i < n; i+=2)
        {
            ans[i] = ar[cnt];
            cnt++;
        }

        ans[n] = ar[0];
        ans[n+1] =ar[1];

        bool flag = true;
        for (int i = 1; i < n-2; i+=2)
        {
            if( ans[i-1] < ans[i] && ans[i] > ans[i+1] ) continue;
            else if( ans[i-1] > ans[i] && ans[i] < ans[i+1]) continue;
            else {
                flag = false;
                break;
            }
        }

        if(flag) {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
        }else cout << "NO" << '\n';