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
    int n, k;
    cin>>n>>k;
    vi tree[n+2];
    int cnt[n+2];
    bool done[n+2];
    memset(cnt, 0, sizeof(cnt));
    memset(done, false, sizeof(done));

    for(int i=1; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        tree[u].pb(v);
        tree[v].pb(u);
        cnt[u]++;
        cnt[v]++;
    }

    int ans = n;
    vi vv;

    for(int i=1; i<=n; i++)
    {
        if(cnt[i]<=1)
        {
            vv.pb(i);
            done[i] = true;
        }
    }

    while(k--)
    {
        if(ans==0)
            break;

        vi temp;

        for(auto ii: vv)
        {
            for(auto jj: tree[ii])
            {
                cnt[jj]--;

                if(cnt[jj]==1 && !done[jj])
                {
                    temp.pb(jj);
                    done[jj] = true;
                }
            }

            ans--;
        }

        vv = temp;
    }

    cout<<ans<<endl;
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
