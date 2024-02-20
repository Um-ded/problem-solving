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
#define rng          200005
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

int arr[rng];

void solve()
{
    int n, k, q;
    cin>>n>>k>>q;

    for(int i=1; i<=n; i++)
    {
        int x, y;
        cin>>x>>y;
        arr[x]++;
        arr[y+1]--;
    }

    for(int i=1; i<rng; i++)
        arr[i] += arr[i-1];

    for(int i=1; i<rng; i++)
    {
        if(arr[i]>=k)
            arr[i] = 1;
        else
            arr[i]=0;
    }

    for(int i=1; i<rng; i++)
        arr[i] += arr[i-1];

    for(int i=1; i<=q; i++)
    {
        int x, y;
        cin>>x>>y;
        cout<<arr[y]-arr[x-1]<<endl;
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
