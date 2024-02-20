#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long    ll;

void solve()
{
    ll n;

    while(cin>>n && n)
    {
        ll pos = 0LL, ans = 0LL;
        vector<ll> arr(n);
        stack<ll> start;

        for(ll i=0; i<n; i++)
            cin>>arr[i];

        while(pos < n)
        {
            if(start.empty() || arr[start.top()]<=arr[pos])
            {
                start.push(pos);
                pos++;
            }
            else
            {
                ll cur = start.top(), cur_area;
                start.pop();

                if(start.empty())
                    cur_area = arr[cur]*pos;
                else
                    cur_area = arr[cur]*(pos-start.top()-1);

                ans = max(ans, cur_area);
            }
        }

        while(!start.empty())
        {
            ll cur = start.top(), cur_area;
            start.pop();

            if(start.empty())
                cur_area = arr[cur]*pos;
            else
                cur_area = arr[cur]*(pos-start.top()-1);

            ans = max(ans, cur_area);
        }

        cout<<ans<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
