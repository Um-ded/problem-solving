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
    int n, m, x, y, ans=0;
    cin>>n>>m>>x>>y;
    string s[n];

    for(int i=0; i<n; i++)
        cin>>s[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            if(s[i][j]=='.' && s[i][j+1]=='.')
            {
                if(2*x<y)
                    ans += 2*x;
                else
                    ans += y;

                s[i][j] = s[i][j+1] = '*';
                j++;
            }
            else if(s[i][j]=='.')
            {
                ans += x;
                s[i][j] = '*';
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(s[i][m-1]=='.')
        {
            ans += x;
            s[i][m-1] = '*';
        }
    }

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
