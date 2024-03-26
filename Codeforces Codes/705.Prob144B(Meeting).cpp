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
    int x1, y1, x2, y2, n, ans = 0;
    map<pair<int, int>, int> mp;
    cin>>x1>>y1>>x2>>y2>>n;
    vector<vector<int> > rad(n, vector<int>(3, 0));

    for(int i=0; i<n; i++)
        cin>>rad[i][0]>>rad[i][1]>>rad[i][2];

    int x = min(x1, x2);
    int X = max(x1, x2);
    int y = min(y1, y2);
    int Y = max(y1, y2);

    for(int i=x; i<=X; i++)
    {
        for(int j=0; j<n; j++)
        {
            int dis = ((i-rad[j][0])*(i-rad[j][0]))+((y-rad[j][1])*(y-rad[j][1]));

            if(dis > (rad[j][2]*rad[j][2]))
                mp[{i, y}]++;

            dis = ((i-rad[j][0])*(i-rad[j][0]))+((Y-rad[j][1])*(Y-rad[j][1]));

            if(dis > (rad[j][2]*rad[j][2]))
                mp[{i, Y}]++;
        }
    }

    for(int i=y+1; i<=Y-1; i++)
    {
        for(int j=0; j<n; j++)
        {
            int dis = ((x-rad[j][0])*(x-rad[j][0]))+((i-rad[j][1])*(i-rad[j][1]));

            if(dis > (rad[j][2]*rad[j][2]))
                mp[{x, i}]++;

            dis = ((X-rad[j][0])*(X-rad[j][0]))+((i-rad[j][1])*(i-rad[j][1]));

            if(dis > (rad[j][2]*rad[j][2]))
                mp[{X, i}]++;
        }
    }

    for(auto u: mp)
        if(u.second == n)
            ans++;

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
