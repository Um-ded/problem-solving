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
    vector<pll > edges(n+2);
    vvll tree(n+2);

    for(ll i=1; i<n; i++)
    {
        cin>>edges[i].first>>edges[i].second;
        tree[edges[i].first].pb(edges[i].second);
        tree[edges[i].second].pb(edges[i].first);
    }

    vll leaf;
    ll two = 0;

    for(ll i=1; i<=n; i++)
    {
        if(((ll)tree[i].size())==1LL)
            leaf.pb(i);
        else if(((ll)tree[i].size())==2LL)
            two++;
    }

    if(((ll)leaf.size())==2 && two==n-2)
    {
        map<pll, ll> mp;
        ll cur = tree[leaf[0]][0];
        ll par = leaf[0];
        ll curp = 2;
        mp[{leaf[0], tree[leaf[0]][0]}] = curp;
        mp[{tree[leaf[0]][0], leaf[0]}] = curp;

        while(1)
        {
            if(cur==leaf[1])
                break;

            if(curp==2)
                curp = 3;
            else
                curp = 2;

            if(tree[cur][0]==par)
            {
                mp[{cur, tree[cur][1]}] = curp;
                mp[{tree[cur][1], cur}] = curp;
                par = cur;
                cur = tree[cur][1];
            }
            else
            {
                mp[{cur, tree[cur][0]}] = curp;
                mp[{tree[cur][0], cur}] = curp;
                par = cur;
                cur = tree[cur][0];
            }
        }

        for(ll i=1; i<n; i++)
            cout<<mp[{edges[i].first, edges[i].second}]<<SS;

        cout<<endl;
    }
    else
        cout<<-1<<endl;
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
