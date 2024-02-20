///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n;
    cin>>n;

    if(n == 2)
    {
        ll x, y;
        cin>>x>>y;

        if(x<y)
            cout<<2<<endl;
        else if(x>y)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    else
    {
        ll mn=LLONG_MAX, mx=LLONG_MIN, mni, mxi;
        vll v(n);

        for(ll i=0; i<n; i++)
            cin>>v[i];

        mn = mx = v[0];
        mni = mxi = 1;

        for(ll i=1; i<n-1; i++)
        {
            if(v[i]<mn)
            {
                mn = v[i];
                mni = i+1;
            }

            if(v[i]>=mx && (v[i]>v[i-1] || v[i]>v[i+1]))
            {
                mx = v[i];
                mxi = i+1;
            }
        }

        if(mn>v[n-1])
        {
            mn = v[n-1];
            mni = n;
        }

        if(v[n-1]>mx && v[n-1]>v[n-2])
        {
            mx = v[n-1];
            mxi = n;
        }

        if(mn == mx)
            cout<<-1<<endl;
        else
            cout<<mxi<<endl;
    }
}

int main()
{
    wow

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
