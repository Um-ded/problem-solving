#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

bool cmp(pair <int,int> a, pair <int,int> b)
{
    if(a.second == b.second)
        return a.first > b.first;

    return a.second > b.second;
}

int main()
{
    wow

    int n, m, a, b, ans=0;
    vector <pair <int,int> > v;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        cin >> a >> b;
        v.pb(make_pair(a, b));
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<m; i++)
    {
        if(n >= v[i].first)
        {
            ans += v[i].first*v[i].second;
            n -= v[i].first;
        }
        else
        {
            ans += n*v[i].second;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
