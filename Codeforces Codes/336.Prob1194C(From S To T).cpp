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

void solve()
{
    string s, t, p;
    cin>>s>>t>>p;

    if(s==t)
        cout<<"YES"<<endl;
    else if(s.size()>t.size())
        cout<<"NO"<<endl;
    else
    {
        bool ok=1;
        int i, j, check[26];
        memset(check, 0, sizeof(check));

        for(i=0; i<p.size(); i++)
            check[p[i]-97]++;

        for(i=0, j=0; j<t.size(); )
        {
            if(i<s.size())
            {
                if(s[i]==t[j])
                {
                    i++;
                    j++;
                    continue;
                }
            }

            if(check[t[j]-97]==0)
            {
                ok = 0;
                break;
            }

            check[t[j]-97]--;
            j++;
        }

        if(i<s.size())
            ok = 0;

        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
