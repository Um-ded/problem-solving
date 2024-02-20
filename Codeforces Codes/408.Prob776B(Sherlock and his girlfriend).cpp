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
#define sz           100006
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

bool arr[sz];

void sieve()
{
    arr[0] = arr[1] = 1;

    for(int i=4; i<sz; i+=2)
        arr[i] = 1;

    for(int i=3; (i*i)<sz; i+=2)
        if(!arr[i])
            for(int j=(i*i); j<sz; j+=(i+i))
                arr[j] = 1;
}

void solve()
{
    int n;
    cin>>n;

    if(n<=2)
        cout<<1<<endl;
    else
        cout<<2<<endl;

    for(int i=2; i<=n+1; i++)
    {
        if(!arr[i])
            cout<<1<<SS;
        else
            cout<<2<<SS;
    }

    cout<<endl;
}

int main()
{
    noice

    sieve();

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
