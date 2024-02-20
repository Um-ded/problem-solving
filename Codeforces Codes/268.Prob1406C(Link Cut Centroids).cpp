///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include <bits/stdc++.h>

using namespace std;

#define endl   "\n"
#define ll     long long
#define wow    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll n;
vector<vector<ll> > graph;
vector<ll> hsize, tsize;

void dfs(ll node, ll parent)
{
    for(ll child: graph[node])
    {
        if(child == parent)
            continue;

        dfs(child, node);
        hsize[node] = max(hsize[node], tsize[child]);
        tsize[node] += tsize[child];
    }

    hsize[node] = max(hsize[node], n-tsize[node]);
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        vector<ll> v;

        tsize.assign(n+2, 1);
        hsize.assign(n+2, 0);
        graph.assign(n+2, v);

        for(ll i=1; i<n; i++)
        {
            ll x, y;
            cin>>x>>y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        dfs(1, 0);
        ll mn = LLONG_MAX;

        for(ll i=1; i<=n; i++)
            mn = min(mn, hsize[i]);

        vector<ll> arr;

        for(ll i=1; i<=n; i++)
            if(hsize[i] == mn)
                arr.push_back(i);

        if(arr.size() == 1)
        {
            cout<<arr[0]<<" "<<graph[arr[0]][0]<<endl;
            cout<<arr[0]<<" "<<graph[arr[0]][0]<<endl;
        }
        else
        {
            ll x = arr[0], y = arr[1];

            if(y != graph[x][0])
            {
                cout<<x<<" "<<graph[x][0]<<endl;
                cout<<y<<" "<<graph[x][0]<<endl;
            }
            else
            {
                cout<<x<<" "<<graph[x][1]<<endl;
                cout<<y<<" "<<graph[x][1]<<endl;
            }
        }
    }

    return 0;
}
