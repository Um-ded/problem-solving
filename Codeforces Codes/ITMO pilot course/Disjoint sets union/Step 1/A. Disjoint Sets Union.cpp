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

vi parents, ranks;

void init(int n)
{
    parents[n] = n;
    ranks[n] = 1;
}

int find_set(int n)
{
    if(parents[n]==n)
        return n;

    return parents[n] = find_set(parents[n]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b)
    {
        if(ranks[a]==ranks[b])
            ranks[a]++;

        if(ranks[a]<ranks[b])
            parents[a] = b;
        else
            parents[b] = a;
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;
    parents.resize(n+2);
    ranks.resize(n+2);

    for(int i=1; i<=n; i++)
        init(i);

    for(int i=1; i<=m; i++)
    {
        string op;
        int a, b;
        cin>>op>>a>>b;

        if(op=="get")
        {
            if(find_set(a)==find_set(b))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            union_sets(a, b);
    }
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
