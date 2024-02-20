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
    int n;
    cin>>n;
    vi p(n+2), a(n+2), b(n+2);
    map<int, set<int> > mp;
    priority_queue<int, vi, greater<int> > pq[5];

    for(int i=1; i<=n; i++)
        cin>>p[i];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        pq[a[i]].push(p[i]);
        mp[p[i]].insert(a[i]);
    }

    for(int i=1; i<=n; i++)
    {
        cin>>b[i];

        if(mp[p[i]].find(b[i])==mp[p[i]].end())
        {
            pq[b[i]].push(p[i]);
            mp[p[i]].insert(b[i]);
        }
    }

    int m;
    cin>>m;

    for(int i=1; i<=m; i++)
    {
        int x;
        cin>>x;

        if(pq[x].empty())
            cout<<-1<<SS;
        else
        {
            while(1)
            {
                if(pq[x].empty())
                {
                    cout<<-1<<SS;
                    break;
                }
                else
                {
                    if(mp[pq[x].top()].empty())
                        pq[x].pop();
                    else
                    {
                        cout<<pq[x].top()<<SS;
                        mp[pq[x].top()] = set<int>();
                        pq[x].pop();
                        break;
                    }
                }
            }
        }
    }

    cout<<endl;
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
