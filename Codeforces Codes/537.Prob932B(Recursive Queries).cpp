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

int dp[1000002], csum[10][1000002];

int dp_func(int n)
{
    if(n<10)
        return n;

    if(dp[n]!=-1)
        return dp[n];

    int nn = n;
    int prod = 1;

    while(nn)
    {
        if(nn%10)
            prod *= nn%10;

        nn /= 10;
    }

    return dp[n] = dp_func(prod);
}

void solve()
{
    int l, r, k;
    cin>>l>>r>>k;
    int ans = csum[k][r]-csum[k][l-1];
    cout<<ans<<endl;
}

int main()
{
    noice

    memset(dp, -1, sizeof(dp));

    for(int i=1000000; i>0; i--)
    {
        int val = dp_func(i);
        csum[val][i] = 1;
    }

    for(int i=1; i<=9; i++)
        for(int j=1; j<=1000000; j++)
            csum[i][j] += csum[i][j-1];

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
