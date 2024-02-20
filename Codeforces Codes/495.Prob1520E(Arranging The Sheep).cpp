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

void solve()
{
    int n;
    string s;
    cin>>n>>s;
    vi stars;

    for(int i=0; i<n; i++)
        if(s[i]=='*')
            stars.pb(i);

    if(stars.empty() || stars.size()==1)
        cout<<0<<endl;
    else if(stars.size()==2)
        cout<<stars[1]-stars[0]-1<<endl;
    else
    {
        ll ans = 0LL;
        int mid = ((stars.size()+1)/2)-1;
        ll midval = stars[mid];

        for(int i=mid-1, j=0; i>=0; i--, j++)
        {
            ll cur = stars[i];
            ans += midval-cur-j-1;
        }

        for(int i=mid+1, j=0; i<stars.size(); i++, j++)
        {
            ll cur = stars[i];
            ans += cur-midval-j-1;
        }

        cout<<ans<<endl;
    }
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
