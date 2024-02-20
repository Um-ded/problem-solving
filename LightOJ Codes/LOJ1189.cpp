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
#define EPS          1e-9
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll fact[22];

void compute_fact()
{
    fact[0] = 1;

    for(ll i=1; i<=20; i++)
        fact[i] = i*fact[i-1];
}

void solve()
{
    static int cs=0;
    ll n;
    vll ans;
    cin>>n;
    cout<<"Case "<<++cs<<": ";

    for(ll i=20; i>=0; i--)
    {
        if(fact[i]<=n)
        {
            ans.pb(i);
            n -= fact[i];
        }
    }

    if(n)
        cout<<"impossible"<<endl;
    else
    {
        cout<<ans.back()<<"!";
        ans.pop_back();

        while(!ans.empty())
        {
            cout<<"+"<<ans.back()<<"!";
            ans.pop_back();
        }

        cout<<endl;
    }
}

int main()
{
    noice

    compute_fact();

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
