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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

string s;
vector<ll> z;
ll n, m, mx=0;

void Z()
{
    z.assign(n, 0);

    for(ll i=1, x=0, y=0; i<n; i++)
    {
        z[i] = max(0LL, min(z[i-x], y-i+1));

        while(i+z[i]<n && s[z[i]]==s[i+z[i]])
        {
            x = i;
            y = i+z[i];
            z[i]++;
        }
    }
}

void solve()
{
    cin>>s;
    n = s.size();
    bool yes = 0;

    if(n>=3)
    {
        Z();

        for(ll i=1; i<n; i++)
        {
            if(i+z[i]==n && mx>=z[i])
            {
                yes = 1;
                m = z[i];
                break;
            }

            mx = max(mx, z[i]);
        }
    }

    if(yes)
    {
        for(ll i=0; i<m; i++)
            cout<<s[i];

        cout<<endl;
    }
    else
        cout<<"Just a legend"<<endl;

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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
