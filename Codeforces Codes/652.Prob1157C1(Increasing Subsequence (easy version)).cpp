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

const int inf = 1e8;

void solve()
{
    int n;
    cin>>n;
    vi v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    int l=0, r=n-1, mn=0;
    string ans;

    while(l<=r)
    {
        int curl=inf, curr=inf;

        if(mn<v[l])
            curl = v[l];

        if(mn<v[r])
            curr = v[r];

        if(curl==inf && curr==inf)
            break;

        if(curl<=curr)
        {
            mn = curl;
            l++;
            ans.pb('L');
        }
        else
        {
            mn = curr;
            r--;
            ans.pb('R');
        }
    }

    cout<<ans.size()<<endl<<ans<<endl;
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
