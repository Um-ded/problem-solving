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
    int k;
    cin>>s>>k;
    int sz = s.size(), cc=0, sf=0;
    bool yes = true;

    for(int i=0; i<sz; i++)
    {
        if(s[i]=='?')
            cc++;
        else if(s[i]=='*')
            sf++;
    }

    int n = sz-sf-cc;

    if(k>n && sf==0)
        yes = false;
    else if(k<n && n-sf-cc>k)
        yes = false;

    if(yes)
    {
        string ans;

        if(n>k)
        {
            int xt = n-k;

            for(int i=0; i<sz; i++)
            {
                if((s[i]=='*' || s[i]=='?') && xt>0)
                {
                    ans.ppb();
                    xt--;
                }
                else if(s[i]!='*' && s[i]!='?')
                    ans.pb(s[i]);
            }
        }
        else if(n<k)
        {
            int xt = k-n;
            bool used = false;

            for(int i=0; i<sz; i++)
            {
                if(s[i]=='*' && used==false)
                {
                    for(int j=0; j<xt; j++)
                        ans.pb(s[i-1]);

                    used = true;
                }
                else if(s[i]!='*' && s[i]!='?')
                    ans.pb(s[i]);
            }
        }
        else
        {
            for(int i=0; i<sz; i++)
                if(s[i]!='*' && s[i]!='?')
                    ans.pb(s[i]);
        }

        cout<<ans<<endl;
    }
    else
        cout<<"Impossible"<<endl;
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
