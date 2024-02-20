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
    string s;
    cin>>s;
    int sz = s.size();
    vi zero(sz), one(sz);

    if(s[0]=='0')
        zero[0] = 1;
    else
        one[0] = 1;

    for(int i=1; i<sz; i++)
    {
        if(s[i]=='0')
        {
            zero[i] = zero[i-1]+1;
            one[i] = one[i-1];
        }
        else
        {
            zero[i] = zero[i-1];
            one[i] = one[i-1]+1;
        }
    }

    int pans0 = zero.back();

    for(int i=0; i<sz; i++)
    {
        int cur = one[i]+(zero.back()-zero[i]);
        pans0 = min(pans0, cur);
    }

    int pans1 = one.back();

    for(int i=0; i<sz; i++)
    {
        int cur = zero[i]+(one.back()-one[i]);
        pans1 = min(pans1, cur);
    }

    int ans = min(pans0, pans1);
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
