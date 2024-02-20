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

void solve()
{
    int n, check=0;
    bool ok=1;
    cin>>n;
    vector<pair<int , string> > v;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int ls = s.size();

        v.pb({ls, s});
    }

    sort(v.begin(), v.end());

    for(int i=1; i<n; i++)
    {
        int ls1, ls2;
        ls1 = v[i-1].second.size();
        ls2 = v[i].second.size();

        for(int j=0; j<=ls2-ls1; j++)
        {
            if(v[i].second.substr(j, ls1)==v[i-1].second)
            {
                check++;
                break;
            }
        }

        if(check!=i)
        {
            ok = 0;
            break;
        }
    }

    if(ok)
    {
        cout<<"YES"<<endl;

        for(int i=0; i<n; i++)
            cout<<v[i].second<<endl;
    }
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
