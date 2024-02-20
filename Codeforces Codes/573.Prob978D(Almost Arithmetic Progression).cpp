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
    cin>>n;
    vi v(n+2);
    int ans = 1e8;

    for(int i=1; i<=n; i++)
        cin>>v[i];

    if(n<=2)
    {
        cout<<0<<endl;
        return;
    }

    for(int i=-1; i<=1; i++)
    {
        for(int j=-1; j<=1; j++)
        {
            int a = v[1]+i;
            int b = v[2]+j;
            int d = b-a;
            int cnt = abs(i)+abs(j);
            bool yes = true;

            for(int k=3; k<=n; k++)
            {
                int cur = a+((k-1)*d);

                if(abs(cur-v[k])>1)
                {
                    yes = false;
                    break;
                }

                cnt += abs(cur-v[k]);
            }

            if(yes)
                ans = min(ans, cnt);
        }
    }

    if(ans==1e8)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
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
