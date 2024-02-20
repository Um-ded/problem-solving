#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

int comdiv(int n, int cnt=0)
{
    for(int i=1; (i*i)<=n; i++)
        if(!(n%i))
            cnt += ((n/i==i)?1:2);

    return cnt;
}

void solve()
{
    int a, b;
    cin>>a>>b;
    cout<<comdiv(__gcd(a, b))<<endl;
}

int main()
{
    noice

    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
