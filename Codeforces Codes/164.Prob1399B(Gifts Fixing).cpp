#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
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
    ll n, mna=INT_MAX, mnb=INT_MAX, cnt=0;
    cin>>n;
    vector<pair<ll, ll> > v(n);

    for(ll i=0; i<n; i++)
    {
        cin>>v[i].first;
        mna = min(mna, v[i].first);
    }


    for(ll i=0; i<n; i++)
    {
        cin>>v[i].second;
        mnb = min(mnb, v[i].second);
    }

    for(ll i=0; i<n; i++)
        cnt += max(v[i].first-mna, v[i].second-mnb);

    cout<<cnt<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
