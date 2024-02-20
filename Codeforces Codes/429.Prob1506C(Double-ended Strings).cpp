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
    int sza, szb, sz=0, ans;
    string a, b;
    bool fnd = 0;
    vector<string> vsa, vsb;
    cin>>a>>b;
    sza = a.size();
    szb = b.size();

    for(int i=0; i<sza; i++)
    {
        for(int j=sza-1; j>=i; j--)
        {
            string cur;

            for(int k = i; k<=j; k++)
                cur.pb(a[k]);

            vsa.pb(cur);
        }
    }

    for(int i=0; i<szb; i++)
    {
        for(int j=szb-1; j>=i; j--)
        {
            string cur;

            for(int k = i; k<=j; k++)
                cur.pb(b[k]);

            vsb.pb(cur);
        }
    }

    sort(vsa.begin(), vsa.end());
    sort(vsb.begin(), vsb.end());

    for(int i=0; i<vsa.size(); i++)
    {
        for(int j=0; j<vsb.size(); j++)
        {
            if(vsa[i]==vsb[j])
            {
                fnd = 1;

                if(vsa[i].size()>sz)
                {
                    sz = vsa[i].size();
                }
            }
        }
    }

    if(fnd)
        ans = sza+szb-(2*sz);
    else
        ans = sza+szb;

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
