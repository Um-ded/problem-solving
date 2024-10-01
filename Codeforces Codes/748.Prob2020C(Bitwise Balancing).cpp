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
    ull b, c, d;
    cin>>b>>c>>d;
    string s;
    ull ans = 0;

    while(b>0 || c>0 || d>0)
    {
        ull bb = b%2;
        ull cc = c%2;
        ull dd = d%2;
        b /= 2;
        c /= 2;
        d /= 2;

        if((bb==0 && cc==1 && dd==1) || (bb==1 && cc==0 && dd==0))
        {
            cout<<-1<<endl;
            return;
        }

        if((bb==0 && cc==0 && dd==0) || (bb==0 && cc==1 && dd==0) || (bb==1 && cc==1 && dd==1))
            s += '0';
        else
            s += '1';
    }

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            ull tmp = 1;
            ans += tmp<<i;
        }
    }

    cout<<ans<<endl;
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
