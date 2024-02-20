#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, ans=0;
    vector<pair<int, int> > v;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        v.pb(make_pair(x, y));
    }

    for(int i=0; i<n; i++)
    {
        bool r=0, l=0, u=0, d=0;

        for(int j=0; j<n; j++)
        {
            if(v[j].first>v[i].first && v[j].second==v[i].second)
                r = 1;
            if(v[j].first<v[i].first && v[j].second==v[i].second)
                l = 1;
            if(v[j].first==v[i].first && v[j].second<v[i].second)
                d = 1;
            if((v[j].first==v[i].first) && (v[j].second>v[i].second))
                u = 1;
        }

        if(r && l && u && d)
            ans++;
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
