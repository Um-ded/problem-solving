/// You must use ull for this problem. otherwise it will always give WA.

#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"
#define noice   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef unsigned long long    ull;

const int MX = 5e6;
ull phi_val[MX+5];

void phi_fun()
{
    for(int i=2; i<=MX; i++)
        phi_val[i] = i;

    for(int i=2; i<=MX; i+=2)
        phi_val[i] -= i/2;

    for(int i=3; i<=MX; i+=2)
        if(phi_val[i]==i)
            for(int j=i; j<=MX; j+=i)
                phi_val[j] -= phi_val[j]/i;

    for(int i=2; i<=MX; i++)
        phi_val[i] = (phi_val[i]*phi_val[i])+phi_val[i-1];
}

void solve()
{
    static int cs = 0;
    int a, b;
    cin>>a>>b;
    ull ans = phi_val[b]-phi_val[a-1];
    cout<<"Case "<<++cs<<": "<<ans<<endl;
}

int main()
{
    noice

    phi_fun();
    int t = 1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
