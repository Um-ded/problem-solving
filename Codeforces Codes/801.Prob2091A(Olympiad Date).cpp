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
    int n, z, o, t, th, f, ans = 0;
    cin>>n;
    vi v(n);
    z = o = t = th = f = 0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]==0)
            z++;
        else if(v[i]==1)
            o++;
        else if(v[i]==2)
            t++;
        else if(v[i]==3)
            th++;
        else if(v[i]==5)
            f++;

        if(z>=3 && o>=1 && t>=2 && th>=1 && f>=1 && ans==0)
            ans = i+1;
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
