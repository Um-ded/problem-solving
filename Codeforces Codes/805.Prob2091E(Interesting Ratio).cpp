#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define sz           10000001
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int arr[sz];

void sieve()
{
    for(int i=0; i<sz; i++)
        arr[i] = 1;

    arr[0] = arr[1] = 0;

    for(int i=4; i<sz; i+=2)
        arr[i] = 0;

    for(int i=3; (i*i)<sz; i+=2)
        if(arr[i])
            for(int j=(i*i); j<sz; j+=(i+i))
                arr[j] = 0;

    for(int i=2; i<sz; i++)
        arr[i] += arr[i-1];
}

void solve()
{
    ll n, ans = 0;
    cin>>n;

    for(ll i=1; i<=n; i++)
    {
        ll cur = n/i;
        ans += arr[cur];
    }

    cout<<ans<<endl;
}

int main()
{
    noice

    sieve();
    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
