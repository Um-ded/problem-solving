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
#define ST           second
#define pb           push_back
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
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

bool ok;
ll a, b;
map<ll, ll> mp;

void bfs()
{
    queue<ll> q;
    q.push(a);

    while(!q.empty())
    {
        ll cur = q.front();
        q.pop();

        ll x, y;
        x = (cur<<1);
        y = (cur*10)+1;

        if(x<=b)
        {
            mp[x] = cur;

            if(x==b)
            {
                ok = 1;
                break;
            }
            else if(x<b)
                q.push(x);
        }

        if(y<=b)
        {
            mp[y] = cur;

            if(y==b)
            {
                ok = 1;
                break;
            }
            else if(y<b)
                q.push(y);
        }
    }
}

void print_path()
{
    ll cur = b;
    vi pv;

    while(cur != a)
    {
        pv.pb(cur);
        cur = mp[cur];
    }

    pv.pb(a);
    cout<<pv.size()<<endl;

    for(ll i=pv.size()-1; i>=0; i--)
        cout<<pv[i]<<SS;
}

void solve()
{
    cin>>a>>b;
    bfs();

    if(!ok)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        print_path();
        cout<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
