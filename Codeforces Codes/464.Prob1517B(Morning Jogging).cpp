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
    int n, m;
    cin>>n>>m;
    int arr[n+2][m+2];
    vector<pair<int, pair<int, int> > > v;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
            v.pb({arr[i][j], {i, j}});
        }
    }

    sort(v.begin(), v.end());

    int ans[n+2][m+2]={0}, check[n+2][m+2]={0};

    for(int i=0; i<m; i++)
    {
        pair<int, pair<int, int> > cur = v[i];
        ans[cur.second.first][i+1] = cur.first;
        check[cur.second.first][cur.second.second] = 1;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(ans[i][j]==0)
            {
                for(int k=1; k<=m; k++)
                {
                    if(check[i][k]==0)
                    {
                        ans[i][j] = arr[i][k];
                        check[i][k] = 1;
                        break;
                    }
                }
            }
        }
    }

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cout<<ans[i][j]<<" \n"[j==m];
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
