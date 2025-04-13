///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n;
    cin>>n;
    int wl_cnt = (n-1)/2;
    vi wins(n+2), losses(n+2);

    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if((!(n&1)) && (i&1) && (j==i+1))
            {
                cout<<0<<SS;
                continue;
            }

            if((wins[i]<wl_cnt) && (losses[j]<wl_cnt))
            {
                cout<<1<<SS;
                wins[i]++;
                losses[j]++;
            }
            else
            {
                cout<<-1<<SS;
                losses[i]++;
                wins[j]++;
            }
        }
    }

    cout<<endl;
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
