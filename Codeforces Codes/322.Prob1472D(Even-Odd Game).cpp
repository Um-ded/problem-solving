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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    bool mov=1;
    ll n, a=0, b=0;
    cin>>n;
    vll odd, even;

    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;

        if(x&1)
            odd.pb(x);
        else
            even.pb(x);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    while((!odd.empty()) && (!even.empty()))
    {
        if(mov)
        {
            if(odd.back()>even.back())
                odd.pop_back();
            else
            {
                a += even.back();
                even.pop_back();
            }

            mov = 0;
        }
        else
        {
            if(odd.back()<even.back())
                even.pop_back();
            else
            {
                b += odd.back();
                odd.pop_back();
            }

            mov = 1;
        }
    }

    while(!odd.empty())
    {
        if(mov)
        {
            odd.pop_back();
            mov = 0;
        }
        else
        {
            b += odd.back();
            odd.pop_back();
            mov = 1;
        }
    }

    while(!even.empty())
    {
        if(mov)
        {
            a += even.back();
            even.pop_back();
            mov = 0;
        }
        else
        {
            even.pop_back();
            mov = 1;
        }
    }

    if(a>b)
        cout<<"Alice"<<endl;
    else if(b>a)
        cout<<"Bob"<<endl;
    else
        cout<<"Tie"<<endl;
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
