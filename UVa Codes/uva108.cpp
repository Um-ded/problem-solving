#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    noice

    int n, ans=INT_MIN;
    cin>>n;
    int arr[n+2][n+2];

    for(int i=0; i<=n; i++)
    {
        arr[0][i] = 0;
        arr[i][0] = 0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>arr[i][j];
            arr[i][j] += arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=i; k<=n; k++)
            {
                for(int l=j; l<=n; l++)
                {
                    int cur = arr[k][l]-arr[i-1][l]-arr[k][j-1]+arr[i-1][j-1];
                    ans = max(ans, cur);
                }
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
