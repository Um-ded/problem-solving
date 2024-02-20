#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, ans=INT_MAX;
    cin>>n;
    vi v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(), v.end());

    for(int i=n-1; i>0; i--)
    {
        ans = min(ans, (v[i]-v[i-1]));

        if(ans == 0)
            break;
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
