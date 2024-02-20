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
    int n;
    string a, b;
    cin>>n>>a>>b;
    map<char, vi > mpa, mpb;
    vector<pii > ans;

    for(int i=0; i<n; i++)
    {
        mpa[a[i]].pb(i+1);
        mpb[b[i]].pb(i+1);
    }

    for(char i='a'; i<='z'; i++)
    {
        int cur = min(mpa[i].size(), mpb[i].size());

        for(int j=0; j<cur; j++)
        {
            ans.pb({mpa[i].back(), mpb[i].back()});
            mpa[i].ppb();
            mpb[i].ppb();
        }

        cur = min(mpa[i].size(), mpb['?'].size());

        for(int j=0; j<cur; j++)
        {
            ans.pb({mpa[i].back(), mpb['?'].back()});
            mpa[i].ppb();
            mpb['?'].ppb();
        }

        cur = min(mpa['?'].size(), mpb[i].size());

        for(int j=0; j<cur; j++)
        {
            ans.pb({mpa['?'].back(), mpb[i].back()});
            mpa['?'].ppb();
            mpb[i].ppb();
        }
    }

    int cur = min(mpa['?'].size(), mpb['?'].size());

    for(int i=0; i<cur; i++)
    {
        ans.pb({mpa['?'].back(), mpb['?'].back()});
        mpa['?'].ppb();
        mpb['?'].ppb();
    }

    cout<<ans.size()<<endl;

    for(auto u:ans)
        cout<<u.first<<SS<<u.second<<endl;
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
