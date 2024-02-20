#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int s, n, x, y;
    vector<pair<int, int> > v;
    cin >> s >> n;

    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        v.pb(make_pair(x, y));
    }
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++)
    {
        if(s > v[i].first)
            s += v[i].second;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
