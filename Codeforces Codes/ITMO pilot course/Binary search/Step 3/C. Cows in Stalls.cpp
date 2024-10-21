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
vi v;

bool possible(int x)
{
    int ret = 1, cur = v.front();

    for(int i=1; i<n; )
    {
        while(i<n)
        {
            if(v[i]-cur>=x)
            {
                cur = v[i++];
                ret++;
                break;
            }
            else
                i++;
        }
    }

    return ret>=k;
}

void solve()
{
    cin>>n>>k;
    v.resize(n);
    int mn=INT_MAX;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(i)
            mn = min(mn, v[i]-v[i-1]);
    }

    int l = mn;
    int r = v.back()-v.front()+1;

    while(l+1<r)
    {
        int m = l+((r-l)>>1);

        if(possible(m))
            l = m;
        else
            r = m;
    }

    cout<<l<<endl;
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
