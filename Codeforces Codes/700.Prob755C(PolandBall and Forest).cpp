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

vector<int> parent, set_size;

void make_set(int n)
{
    parent[n] = n;
    set_size[n] = 1;
}

int find_set(int n)
{
    if(parent[n] == n)
        return n;

    return parent[n] = find_set(parent[n]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a != b)
    {
        if(set_size[a] < set_size[b])
            swap(a, b);

        parent[b] = a;
        set_size[a] += set_size[b];
    }
}

void solve()
{
    int n;
    set<int> trees;
    cin>>n;
    parent.resize(n+2);
    set_size.resize(n+2);

    for(int i=1; i<=n; i++)
        make_set(i);

    for(int i=1; i<=n; i++)
    {
        int j;
        cin>>j;
        union_sets(i, j);
    }

    for(int i=1; i<=n; i++)
        find_set(i);

    for(int i=1; i<=n; i++)
        trees.insert(parent[i]);

    cout<<trees.size()<<endl;
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
