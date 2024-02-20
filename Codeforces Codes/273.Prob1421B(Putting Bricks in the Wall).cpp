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

struct pr
{
    int x, y;
};

void solve()
{
    int n;
    cin>>n;
    vector<string> v(n);
    vector<pr> ans;

    for(int i=0; i<n; i++)
        cin>>v[i];

    if(v[0][1]==v[1][0])
    {
        if(v[n-1][n-2]==v[0][1])
            ans.pb({n, n-1});

        if(v[n-2][n-1]==v[0][1])
            ans.pb({n-1, n});
    }
    else if(v[n-1][n-2]==v[n-2][n-1])
    {
        if(v[0][1]==v[n-1][n-2])
            ans.pb({1, 2});

        if(v[1][0]==v[n-1][n-2])
            ans.pb({2, 1});
    }
    else
    {
        ans.pb({1, 2});

        if(v[n-1][n-2]==v[1][0])
            ans.pb({n, n-1});

        if(v[n-2][n-1]==v[1][0])
            ans.pb({n-1, n});
    }

    cout<<ans.size()<<endl;

    if(ans.size())
        for(int i=0; i<ans.size(); i++)
            cout<<ans[i].x<<SS<<ans[i].y<<endl;
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
