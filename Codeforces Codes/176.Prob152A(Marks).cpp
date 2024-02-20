#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, m, cnt=0;
    cin>>n>>m;
    char s[n+2][m+2];
    char mx[m+2];
    bool ans[n+2]={0};

    for(int i=0; i<m+2; i++)
        mx[i] = '0';

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>s[i][j];
            mx[j] = max(mx[j], s[i][j]);
        }
    }

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i][j] == mx[j])
                ans[i] = 1;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(ans[i] == 1)
            cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}
