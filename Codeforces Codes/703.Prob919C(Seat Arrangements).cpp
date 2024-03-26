///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, m, k, ans = 0;
    cin>>n>>m>>k;
    char seats[n+2][m+2];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>seats[i][j];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; )
        {
            if(seats[i][j]=='*')
            {
                j++;
                continue;
            }

            int cnt = 0;

            while(j<=m && seats[i][j]=='.')
            {
                cnt++;
                j++;
            }

            if(cnt>=k)
                ans += cnt-k+1;
        }
    }

    for(int j=1; j<=m; j++)
    {
        for(int i=1; i<=n; )
        {
            if(seats[i][j]=='*')
            {
                i++;
                continue;
            }

            int cnt = 0;

            while(i<=n && seats[i][j]=='.')
            {
                cnt++;
                i++;
            }

            if(cnt>=k)
                ans += cnt-k+1;
        }
    }

    if(k==1)
        cout<<ans/2<<endl;
    else
        cout<<ans<<endl;
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
