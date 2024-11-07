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
    int n, m, ans = 0;
    cin>>n>>m;
    char arr[n+2][m+2];
    int x = min(n, m)/2;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>arr[i][j];

    for(int i=1; i<=x; i++)
    {
        vector<char> v;

        for(int j=i; j<=m-i+1; j++)
            v.pb(arr[i][j]);

        for(int j=i+1; j<=n-i; j++)
            v.pb(arr[j][m-i+1]);

        for(int j=m-i+1; j>=i; j--)
            v.pb(arr[n-i+1][j]);

        for(int j=n-i; j>=i+1; j--)
            v.pb(arr[j][i]);

        v.pb(v[0]);
        v.pb(v[1]);
        v.pb(v[2]);

        for(int j=0; j<v.size()-3; j++)
            if(v[j]=='1' && v[j+1]=='5' && v[j+2]=='4' && v[j+3]=='3')
                ans++;
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
