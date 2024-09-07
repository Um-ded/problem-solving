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

int n, k;

bool poss(int x)
{
    int div = 1;
    int ret = 0;

    while(x/div > 0)
    {
        ret += x/div;
        div *= k;
    }

    return ret >= n;
}

void solve()
{
    cin>>n>>k;

    int l = 0;
    int r = n;

    while(l+1<r)
    {
        int m = l+((r-l)>>1);

        if(!poss(m))
            l = m;
        else
            r = m;
    }

    cout<<r<<endl;
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
