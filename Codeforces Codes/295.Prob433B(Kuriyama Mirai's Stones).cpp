#include <bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long  ll;

int main()
{
    wow

    ll n;
    cin>>n;
    ll arr[n+5]={0}, typ1[n+5]={0}, typ2[n+5]={0};

    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
        typ1[i] = typ1[i-1]+arr[i];
    }

    sort(arr+1, arr+(n+1));

    for(ll i=1; i<=n; i++)
        typ2[i] = typ2[i-1]+arr[i];

    ll m;
    cin>>m;

    for(ll i=1; i<=m; i++)
    {
        ll typ, l, r;
        cin>>typ>>l>>r;

        if(typ == 1)
            cout<<typ1[r]-typ1[l-1]<<endl;
        else
            cout<<typ2[r]-typ2[l-1]<<endl;
    }

    return 0;
}
