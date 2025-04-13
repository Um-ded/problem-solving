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
    int n, x, y;
    cin>>n>>x>>y;
    vi ans(n+2);

    for(int i=1; i<=n; i++)
        ans[i] = i-1;

    for(int i=2; i<=n; i++)
    {
        int a = ans[i-1], b = ans[i+1], c = 1e6;

        if(i==x && y!=(i+1))
            c = ans[y];
        else if(i==y && x!=(i-1))
            c = ans[x];

        for(int j=0; j<=3; j++)
        {
            if(j!=a && j!=b && j!=c)
            {
                ans[i] = j;
                break;
            }
        }
    }

    for(int i=1; i<=n; i++)
        cout<<ans[i]<<" \n"[i==n];
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
