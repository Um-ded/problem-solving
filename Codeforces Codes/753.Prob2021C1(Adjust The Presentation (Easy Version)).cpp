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
    int n, m, q;
    cin>>n>>m>>q;
    map<int, pii > mp;

    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        mp[x].first = i;
    }

    for(int i=1, j=1; i<=m; i++)
    {
        int x;
        cin>>x;

        if(mp[x].second==0)
            mp[x].second = j++;
    }

    for(auto u: mp)
    {
        if(u.second.second!=0 && u.second.first!=u.second.second)
        {
            cout<<"TIDAK"<<endl;
            return;
        }
    }

    cout<<"YA"<<endl;
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
