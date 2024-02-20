///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

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
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll h, w, n, lol=1;
    cin>>h>>w>>n;
    ll v[n+2], arr[h+2][w+2];

    for(ll i=1; i<=n; i++)
        cin>>v[i];

    for(ll i=1; i<=h; i++)
    {
        if(i%2)
        {
            for(ll j=1; j<=w; j++)
            {
                arr[i][j] = lol;
                v[lol]--;

                if(v[lol] == 0)
                    lol++;
            }
        }
        else
        {
            for(ll j=w; j>=1; j--)
            {
                arr[i][j] = lol;
                v[lol]--;

                if(v[lol] == 0)
                    lol++;
            }
        }
    }

    for(ll i=1; i<=h; i++)
    {
        for(ll j=1; j<=w; j++)
            cout<<arr[i][j]<<SS;

        cout<<endl;
    }
}

int main()
{
    wow

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
