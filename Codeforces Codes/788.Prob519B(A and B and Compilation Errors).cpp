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
    vi v1, v2;
    bool flg = false;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v1.pb(x);
    }

    sort(v1.begin(), v1.end());

    for(int i=0; i<n-1; i++)
    {
        int x;
        cin>>x;
        v2.pb(x);
    }

    sort(v2.begin(), v2.end());

    for(int i=0; i<n-1; i++)
    {
        if(v1[i]!=v2[i])
        {
            cout<<v1[i]<<endl;
            flg = true;
            break;
        }
    }

    if(!flg)
        cout<<v1[n-1]<<endl;

    flg = false;
    v1 = vi();

    for(int i=0; i<n-2; i++)
    {
        int x;
        cin>>x;
        v1.pb(x);
    }

    sort(v1.begin(), v1.end());

    for(int i=0; i<n-2; i++)
    {
        if(v1[i]!=v2[i])
        {
            cout<<v2[i]<<endl;
            flg = true;
            break;
        }
    }

    if(!flg)
        cout<<v2[n-2]<<endl;
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
