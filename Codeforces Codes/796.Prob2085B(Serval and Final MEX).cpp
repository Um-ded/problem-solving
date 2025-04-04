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
    int n;
    cin>>n;
    vi v(n+2);
    bool p1z = false, p2z = false;

    for(int i=1; i<=n; i++)
        cin>>v[i];

    for(int i=1; i<=n-2; i++)
    {
        if(v[i]==0)
        {
            p1z = true;
            break;
        }
    }

    if(v[n-1]==0 || v[n]==0)
        p2z = true;

    if(p1z)
    {
        if(p2z)
            cout<<3<<endl<<1<<SS<<n-2<<endl<<2<<SS<<3<<endl<<1<<SS<<2<<endl;
        else
            cout<<2<<endl<<1<<SS<<n-2<<endl<<1<<SS<<3<<endl;
    }
    else
    {
        if(p2z)
            cout<<2<<endl<<n-1<<SS<<n<<endl<<1<<SS<<n-1<<endl;
        else
            cout<<1<<endl<<1<<SS<<n<<endl;
    }
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
