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

int m, n;
vi ti, zi, yi;

int indi(int i, int tm)
{
    int ret = 0;

    int a = ti[i]*zi[i];
    int b = a+yi[i];
    int c = tm/b;
    int d = tm%b;
    ret += c*zi[i];

    if(d >= a)
        ret += zi[i];
    else
        ret += d/ti[i];

    return ret;
}

bool is_good(int tm)
{
    int cnt = 0;

    for(int i=1; i<=n; i++)
        cnt += indi(i, tm);

    return cnt >= m;
}

void solve()
{
    cin>>m>>n;
    ti.resize(n+2);
    zi.resize(n+2);
    yi.resize(n+2);

    for(int i=1; i<=n; i++)
        cin>>ti[i]>>zi[i]>>yi[i];

    int l = -1;
    int r = 3e6;

    while(l+1<r)
    {
        int m = l+((r-l)>>1);

        if(is_good(m))
            r = m;
        else
            l = m;
    }

    cout<<r<<endl;

    int tot = 0;

    for(int i=1; i<=n; i++)
    {
        int cur = indi(i, r);
        cout<<min(cur, m-tot)<<" \n"[i==n];
        tot = min(tot+cur, m);
    }
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

/**

31 7
1 1 3
2 2 2
2 1 1
1 1 2
1 2 1
2 5 5
2 2 1

**/
