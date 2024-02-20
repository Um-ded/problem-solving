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

vll arr;

void solve()
{
    ll n, ans=1;
    cin>>n;
    vll v(n+5);
    arr.assign((2*n)+5, 0);


    for(ll i=1; i<=n; i++)
    {
        cin>>v[i];
        arr[v[i]]++;
    }

    arr[v[n]]--;
    arr[v[n]+1]++;
    v[n]++;

    for(ll i=n-1; i>0; i--)
    {
        if(arr[v[i]+1]==0)
        {
            arr[v[i]+1]++;
            ans++;
            arr[v[i]]--;

            if(arr[v[i]]>0)
            {
                ans++;
                i -= arr[v[i]];
            }
        }
        else
        {
            ans++;
            i-= (arr[v[i]]-1);
        }
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
