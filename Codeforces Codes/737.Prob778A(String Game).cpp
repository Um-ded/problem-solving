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

string t, p;
int szt, szp;
vi v;

bool is_safe(int x)
{
    string s, ss;
    int a, b;
    s = t;

    for(int i=0; i<=x; i++)
        s[v[i]-1] = '$';

    for(int i=0; i<szt; i++)
        if(s[i]!='$')
            ss += s[i];

    for(a=0, b=0; a<ss.size(); a++)
    {
        if(ss[a]==p[b])
            b++;

        if(b == szp)
            return true;
    }

    return false;
}

void solve()
{
    cin>>t>>p;
    szt = t.size();
    szp = p.size();
    v.resize(szt);

    for(int i=0; i<szt; i++)
        cin>>v[i];

    int l = -1;
    int r = szt;

    while(l+1<r)
    {
        int m = l+((r-l)>>1);

        if(is_safe(m))
            l = m;
        else
            r = m;
    }

    cout<<(l+1)<<endl;
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
