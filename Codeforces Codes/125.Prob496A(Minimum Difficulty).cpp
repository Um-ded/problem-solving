#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, mx=INT_MIN, mn=INT_MAX;
    vi v;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);

        if(i>0)
            mx = max(mx, v[i]-v[i-1]);
    }

    for(int i=2; i<n; i++)
        mn = min(mn, v[i]-v[i-2]);

    mx = max(mx, mn);
    cout<<mx<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
