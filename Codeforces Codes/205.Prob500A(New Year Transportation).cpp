/// Approach 1 - DFS

#include <bits/stdc++.h>

using namespace std;

#define mx 30005

typedef long long ll;

vector <int> adj[mx];
bool vis[mx];

void dfs(int n)
{
    vis[n] = 1;

    for(int i=0; i<adj[n].size(); i++)
    {
        int nxt = adj[n][i];

        if(vis[nxt] == 0)
            dfs(nxt);
    }
}

int main()
{
    int n, t;
    cin>>n>>t;

    for(int i=1; i<n; i++)
    {
        int x;
        cin>>x;
        adj[i].push_back(i+x);
    }

    dfs(1);

    if(vis[t])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}



/// Approach 2

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

void solve()
{
    int n, t;
    cin>>n>>t;
    vi v(n+2);
    set<int> s;

    for(int i=1; i<n; i++)
        cin>>v[i];

    for(int i=1; i<n; )
    {
        s.insert(i+v[i]);
        i += v[i];
    }

    if(s.find(t)!=s.end())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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



/// Approach 3

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
    int n, t, cur = 1, x = 1;
    cin>>n>>t;
    vi v(n);

    for(int i=1; i<n; i++)
        cin>>v[i];

    do
    {
        cur += v[x];
        x = cur;
    }
    while(cur<t);

    if(cur==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
