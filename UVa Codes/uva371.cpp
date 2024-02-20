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
    ll l, h;

    while(cin>>l>>h)
    {
        if(l==0 && h==0)
            break;

        if(l>h)
            l^=h^=l^=h;

        ll ans=1, mx=LLONG_MIN;

        for(ll i=h; i>=l; i--)
        {
            ll n=i, temp=0;

            if(n==1)
                temp = 3;
            else
            {
                while(n!=1)
                {
                    if(n&1)
                        n = (3*n)+1;
                    else
                        n /= 2;

                    temp++;
                }
            }

            if(temp>=mx)
            {
                mx = temp;
                ans = i;
            }
        }

        cout<<"Between "<<l<<" and "<<h<<", "<<ans<<" generates the longest sequence of "<<mx<<" values."<<endl;
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
