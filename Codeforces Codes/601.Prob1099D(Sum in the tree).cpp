/// Approach 1

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

const ll inf = 1e15;

void solve()
{
    ll n;
    cin>>n;
    vll par(n+2), sum(n+2);
    vvll tree(n+2);

    for(ll i=2; i<=n; i++)
    {
        cin>>par[i];
        tree[par[i]].pb(i);
    }

    for(ll i=1; i<=n; i++)
        cin>>sum[i];

    ll ans = sum[1];
    bool yes = true;

    for(ll i=2; i<=n; i++)
    {
        if(sum[i]==-1)
            continue;

        int cur = par[i];

        while(sum[cur]==-1)
            cur = par[cur];

        if(sum[cur]>sum[i])
        {
            yes = false;
            break;
        }
    }

    if(yes)
    {
        for(ll i=2; i<=n; i++)
        {
            if(sum[i]!=-1)
            {
                ans += sum[i]-sum[par[i]];
                continue;
            }

            ll cur = inf;

            for(ll j=0; j<tree[i].size(); j++)
                if(sum[tree[i][j]]!=-1)
                    cur = min(cur, sum[tree[i][j]]);

            if(cur==inf)
                sum[i] = sum[par[i]];
            else
                sum[i] = cur;

            ans += sum[i]-sum[par[i]];
        }

        cout<<ans<<endl;
    }
    else
        cout<<-1<<endl;
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



/// Approach 2 - Same idea but slightly different implementation

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

const ll inf = 1e15;

void solve()
{
    ll n;
    cin>>n;
    vll par(n+2), sum(n+2);
    vvll tree(n+2);

    for(ll i=2; i<=n; i++)
    {
        cin>>par[i];
        tree[par[i]].pb(i);
    }

    for(ll i=1; i<=n; i++)
        cin>>sum[i];

    ll ans = sum[1];
    bool yes = true;

    for(ll i=2; i<=n; i++)
    {
        if(sum[i]!=-1)
        {
            ans += sum[i]-sum[par[i]];
            continue;
        }

        ll cur = inf;

        for(ll j=0; j<tree[i].size(); j++)
            if(sum[tree[i][j]]!=-1)
                cur = min(cur, sum[tree[i][j]]);

        if(cur==inf)
            sum[i] = sum[par[i]];
        else
            sum[i] = cur;

        ans += sum[i]-sum[par[i]];
    }

    for(ll i=2; i<=n; i++)
    {
        if(sum[par[i]]>sum[i])
        {
            yes = false;
            break;
        }
    }

    if(yes)
        cout<<ans<<endl;
    else
        cout<<-1<<endl;
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
