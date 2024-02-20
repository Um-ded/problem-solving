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
    int n, a, b, c, r, p, s;
    string str;
    cin>>n>>a>>b>>c>>str;
    int sz = str.size();
    r = p = s = 0;

    for(int i=0; i<sz; i++)
    {
        if(str[i]=='R')
            r++;
        else if(str[i]=='P')
            p++;
        else
            s++;
    }

    int ans = min(a, s)+min(b, r)+min(c, p);

    if(ans>=((n+1)/2))
    {
        cout<<"YES"<<endl;
        string ss;

        for(int i=0; i<sz; i++)
            ss.pb('*');

        for(int i=0; i<sz; i++)
        {
            if(str[i]=='S' && a>0)
            {
                ss[i] = 'R';
                a--;
            }
            else if(str[i]=='R' && b>0)
            {
                ss[i] = 'P';
                b--;
            }
            else if(str[i]=='P' && c>0)
            {
                ss[i] = 'S';
                c--;
            }
        }

        for(int i=0; i<sz; i++)
        {
            if(ss[i]=='*')
            {
                if(a>0)
                {
                    ss[i] = 'R';
                    a--;
                }
                else if(b>0)
                {
                    ss[i] = 'P';
                    b--;
                }
                else
                {
                    ss[i] = 'S';
                    c--;
                }
            }
        }

        cout<<ss<<endl;
    }
    else
        cout<<"NO"<<endl;
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
