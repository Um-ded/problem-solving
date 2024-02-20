///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n;
    cin>>n;
    vll v(n+5);

    for(ll i=1; i<=n+2; i++)
        cin>>v[i];

    sort(v.begin()+1, v.begin()+n+3);

    ll sum = 0, nx, x;
    bool ok = 0;

    for(int i=1; i<=n+1; i++)
    {
        if(i==n+1)
        {
            if(sum==v[i])
            {
                nx = n+1;
                x = n+2;
                ok = 1;
            }
            else
                sum += v[i];
        }
        else
            sum += v[i];
    }

    if(!ok)
    {
        for(int i=1; i<=n+1; i++)
        {
            if(sum-v[i]==v[n+2])
            {
                x = i;
                nx = n+2;
                ok = 1;
                break;
            }
        }
    }

    if(!ok)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=1; i<=n+2; i++)
    {
        if(i==nx || i==x)
            continue;

        cout<<v[i]<<SS;
    }

    cout<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
