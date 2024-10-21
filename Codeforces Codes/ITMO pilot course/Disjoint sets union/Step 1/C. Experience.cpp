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

vi parents, ranks, points;

void init(int n)
{
    parents[n] = n;
    ranks[n] = points[n] = 0;
}

int find_set(int n)
{
    if(parents[n]==n)
        return n;

    int new_par = find_set(parents[n]);

    if(new_par!=parents[n])
    {
        points[n] += points[parents[n]];
        parents[n] = new_par;
    }

    return parents[n];
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);

    if(a!=b)
    {
        if(ranks[a]<ranks[b])
            swap(a, b);
        else if(ranks[a]==ranks[b])
            ranks[a]++;

        parents[b] = a;
        points[b] -= points[a];
    }
}

void solve()
{
    int n, m;
    cin>>n>>m;
    parents.resize(n+2);
    ranks.resize(n+2);
    points.resize(n+2);


    for(int i=1; i<=n; i++)
        init(i);

    for(int i=1; i<=m; i++)
    {
        string op;
        cin>>op;

        if(op=="get")
        {
            int a;
            cin>>a;
            int b = find_set(a);

            if(a==b)
                cout<<points[a]<<endl;
            else
                cout<<(points[a]+points[b])<<endl;
        }
        else if(op=="join")
        {
            int a, b;
            cin>>a>>b;
            union_sets(a, b);
        }
        else
        {
            int a, b;
            cin>>a>>b;
            a = find_set(a);
            points[a] += b;
        }
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

/**

5 21
add 1 100
join 1 2
get 1
add 2 99
get 2
join 2 3
get 3
join 1 3
add 5 100
get 5
add 3 55
add 4 20
join 4 5
get 5
join 4 1
add 1 90
get 1
get 2
get 3
get 4
get 5

**/
