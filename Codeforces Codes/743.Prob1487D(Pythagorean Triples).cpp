/// Approach 1 - formula

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n;
    cin>>n;
    ll N = (2*n)-1;
    N = sqrt(N);

    if(!(N&1))
        N--;

    cout<<(((N-3)/2)+1)<<endl;
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



/// Approach 2 - formula and binary search

///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n;
    cin>>n;

    if(n<5)
    {
        cout<<0<<endl;
        return;
    }

    ll l = 3;
    ll r = n;

    while(l+1<r)
    {
        ll m = (l+((r-l)>>1));
        ll chk = ((m*m)+1)/2;

        if(chk<=n)
            l = m;
        else
            r = m;

//        cout<<l<<SS<<m<<SS<<r<<endl;
    }

    cout<<(((l-3)/2)+1)<<endl;
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
