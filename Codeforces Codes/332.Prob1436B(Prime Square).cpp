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

vi v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
bool prime[102];

void solve()
{
    int n;
    cin>>n;

    if(prime[n]==1)
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cout<<1<<" \n"[j==n];
    else
    {
        int ans[n+2][n+2]={0};

        for(int i=1; i<=n; i++)
            ans[i][i] = ans[i][n-i+1] = 1;

        if(n&1)
            ans[1][(n+1)/2] = ans[(n+1)/2][1] = 1;

        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                cout<<ans[i][j]<<" \n"[j==n];
    }
}

int main()
{
    noice

    for(int i=0; i<v.size(); i++)
        prime[v[i]] = 1;

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
