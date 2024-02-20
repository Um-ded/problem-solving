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

int n, ans=2;
map<string, string> mp;
map<string, bool> vis;
map<string, int> dis;

int f(string str)
{
    if(mp[str]=="null")
        return 1;

    if(vis[str]==true)
        return dis[str];

    vis[str] = true;
    return dis[str] = 1+f(mp[str]);
}

void solve()
{
    cin>>n;
    mp["polycarp"] = "null";
    vis["polycarp"] = true;
    dis["polycarp"] = 1;

    for(int i=0; i<n; i++)
    {
        string a, b, rep;
        cin>>a>>rep>>b;

        for(int j=0; j<a.size(); j++)
            a[j] = tolower(a[j]);

        for(int j=0; j<b.size(); j++)
            b[j] = tolower(b[j]);

        mp[a] = b;
        vis[a] = false;
        dis[a] = 0;
    }

    for(auto u : mp)
    {
        if(vis[u.first]==false)
        {
            f(u.first);
            ans = max(ans, dis[u.first]);
        }
    }

    cout<<ans<<endl;
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
