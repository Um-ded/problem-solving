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
    int n, m;
    string s;
    cin>>n>>m>>s;
    int l, r;
    vi v;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            l = i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(s[i]=='1')
        {
            r = i;
            break;
        }
    }

    for(int i=0; i<n; i++)
        if(s[i]=='1')
            v.pb(i);

    if(!v.empty())
    {
        for(int i=l-1, j=1; j<=min(l, m); i--, j++)
            s[i] = '1';

        for(int i=r+1, j=1; j<=min(n-r-1, m); i++, j++)
            s[i] = '1';

        for(int i=1; i<v.size(); i++)
        {
            int cur = v[i]-v[i-1]-1;
            cur /= 2;
            cur = min(cur, m);

            for(int j=v[i-1]+1, k=0; k<cur; j++, k++)
                s[j] = '1';

            for(int j=v[i]-1, k=0; k<cur; j--, k++)
                s[j] = '1';
        }
    }

    cout<<s<<endl;
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
