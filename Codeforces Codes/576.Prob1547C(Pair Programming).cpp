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
    int k, n, m;
    cin>>k>>n>>m;
    vi veca(n), vecb(m), ans;

    for(int i=0; i<n; i++)
        cin>>veca[i];

    for(int i=0; i<m; i++)
        cin>>vecb[i];

    int a, b;
    a = b = 0;

    while(1)
    {
        while(a<n && veca[a]==0)
        {
            ans.pb(0);
            a++;
            k++;
        }

        while(b<m && vecb[b]==0)
        {
            ans.pb(0);
            b++;
            k++;
        }

        if(a<n && veca[a]<=k)
        {
            ans.pb(veca[a]);
            a++;
        }

        if(b<m && vecb[b]<=k)
        {
            ans.pb(vecb[b]);
            b++;
        }

        if(a==n && b==m)
            break;

        if((a<n && veca[a]>k && b<m && vecb[b]>k) || (a==n && vecb[b]>k) || (b==m && veca[a]>k))
        {
            cout<<-1<<endl;
            return;
        }
    }

    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<SS;

    cout<<endl;
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
