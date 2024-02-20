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

struct node
{
    ll x, y;
};

void solve()
{
    ll n;
    bool flg=0;
    cin>>n;
    vector<node> v(n);

    for(ll i=0; i<n; i++)
        cin>>v[i].x>>v[i].y;

    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<n; j++)
        {
            for(ll k=0; k<n; k++)
            {
                if(i!=j && j!=k && k!=i)
                {
                    ll area = (v[i].x*v[j].y)+(v[j].x*v[k].y)+(v[k].x*v[i].y)-(v[i].y*v[j].x)-(v[j].y*v[k].x)-(v[k].y*v[i].x);

                    if(area == 0)
                    {
                        flg = 1;
                        break;
                    }
                }
            }
        }
    }

    if(flg==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
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
