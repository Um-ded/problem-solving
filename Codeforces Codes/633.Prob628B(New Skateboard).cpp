#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    string s;
    cin>>s;
    ll ans=0, sz=s.size();

    for(ll i=0; i<sz; i++)
    {
        if(!((s[i]-'0')%4))
            ans++;

        if(i && (!((((s[i-1]-'0')*10)+(s[i]-'0'))%4)))
            ans += i;
    }

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
