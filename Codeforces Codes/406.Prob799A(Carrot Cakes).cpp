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
#define SD           second
#define pb           push_back
#define ppb          pop_back
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
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, t, k, d, ans1, m, x, y, z, ans2=0;
    cin>>n>>t>>k>>d;
    ans1 = ((n+k-1)/k)*t; /// time needed to make all the cakes in only 1st oven
    m = ((d+t-1)/t); /// number of times the 1st oven is used while building the 2nd oven
    n -= m*k; /// number of cakes we have to make in both oven
    ans2 += m*t; /// time taken to make cakes only in 1st oven

    if(n>0)
    {
        x = (m*t)-d; /// time interval between 2nd and 1st oven delivery
        y = t-x; /// time interval between 1st and 2nd oven delivery
        z = (n+k-1)/k; /// number of times we need to use the ovens
        ans2 += (z/2)*(x+y);

        if(z&1)
            ans2 += y;
    }

    if(ans1>ans2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
