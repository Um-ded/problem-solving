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
    int n, r, c;
    cin>>n;

    if(n == 1)
    {
        int x;
        cin>>x;
        cout<<29<<endl;
        return;
    }

    ll grid[n+2][n+2];
    set<ll> sum;
    memset(grid, 0, sizeof(grid));

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>grid[i][j];

            if(grid[i][j] == 0)
            {
                r = i;
                c = j;
            }
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(i == r)
            continue;

        ll cur_sum = 0LL;

        for(int j=1; j<=n; j++)
            cur_sum += grid[i][j];

        sum.insert(cur_sum);
    }

    for(int j=1; j<=n; j++)
    {
        if(j == c)
            continue;

        ll cur_sum = 0LL;

        for(int i=1; i<=n; i++)
            cur_sum += grid[i][j];

        sum.insert(cur_sum);
    }

    if(sum.size() == 1)
    {
        ll x = 0LL, y = 0LL, z = *(sum.begin());

        for(int j=1; j<=n; j++)
            x += grid[r][j];

        for(int i=1; i<=n; i++)
            y += grid[i][c];

        if(x==y && z-x>0)
        {
            grid[r][c] = z-x;
            ll d1 = 0LL, d2 = 0LL;

            for(int i=1; i<=n; i++)
            {
                d1 += grid[i][i];
                d2 += grid[i][n-i+1];
            }

            if(d1!=d2 || d1!=z)
                cout<<-1<<endl;
            else
                cout<<z-x<<endl;
        }
        else
            cout<<-1<<endl;
    }
    else
        cout<<-1<<endl;
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
