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
    int n, k;
    cin>>n>>k;

    if(n==1 && k==1)
    {
        cout<<1<<endl<<1<<endl;
        return;
    }

    if(n!=1 && (k==1 || k==n))
    {
        cout<<-1<<endl;
        return;
    }

    int x = k-1;
    int y = n-k;
    cout<<3<<endl;

    if((x%2==1) && (y%2==1))
        cout<<1<<SS<<k<<SS<<(k+1)<<endl;
    else
        cout<<1<<SS<<(k-1)<<SS<<(k+2)<<endl;
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
