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
    cin>>n;
    vi v(n+2), mn(n+2), mx(n+2);
    set<int> mnst, mxst;

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        mnst.insert(i);
        mxst.insert(i);
    }

    for(int i=1; i<=n; i++)
    {
        if(v[i]!=v[i-1])
        {
            mn[i] = v[i];
            mx[i] = v[i];
            mnst.erase(v[i]);
            mxst.erase(v[i]);
            continue;
        }

        mn[i] = *mnst.begin();
        mnst.erase(mn[i]);
        auto it = mxst.lower_bound(v[i]);
        it--;
        mx[i] = *it;
        mxst.erase(mx[i]);
    }

    for(int i=1; i<=n; i++)
        cout<<mn[i]<<" \n"[i==n];

    for(int i=1; i<=n; i++)
        cout<<mx[i]<<" \n"[i==n];
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
