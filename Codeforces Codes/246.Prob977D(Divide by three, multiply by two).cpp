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
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ull n;
    cin>>n;
    vector<ull> v(n);

    for(auto i=0; i<n; i++)
        cin>>v[i];

    for(auto i=0; i<n; i++)
    {
        ull temp = v[i];
        bool check[n+2]= {0};
        vector<ull> ans;
        ans.pb(temp);

        while(1)
        {
            ull a, b, c;
            bool flg=0;

            if(temp%3 == 0)
                a = temp/3;
            else
                a  = -1;

            b = temp*2;

            if(a != -1)
            {
                for(auto j=0; j<n; j++)
                {
                    if(v[j] == a && check[j]==0)
                    {
                        ans.pb(a);
                        check[j] = 1;
                        flg = 1;
                        c = a;
                        break;
                    }
                }
            }

            if(a == -1 || ((a != -1) && flg == 0))
            {
                for(auto j=0; j<n; j++)
                {
                    if(v[j] == b && check[j]==0)
                    {
                        ans.pb(b);
                        check[j] = 1;
                        flg = 1;
                        c = b;
                        break;
                    }
                }
            }

            if(!flg)
                break;

            temp = c;
        }

        if(ans.size() == n)
            v = ans;
    }

    for(auto i=0; i<n; i++)
        cout<<v[i]<<SS;

    cout<<endl;
}

int main()
{
    wow

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
