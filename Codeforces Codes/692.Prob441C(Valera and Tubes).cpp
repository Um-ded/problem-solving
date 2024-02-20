#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, m, k, cnt = 0, cur_x = 1, cur_y = 1;
    cin>>n>>m>>k;
    int rng = n*m;
    char dir = 'R';
    vector<pii > cells;

    while(cnt<rng)
    {
        if(dir=='R')
        {
            while(cur_y<m)
            {
                cells.pb({cur_x, cur_y});
                cur_y++;
                cnt++;
            }

            cells.pb({cur_x, cur_y});
            cnt++;
            cur_x++;
            dir = 'L';
        }
        else
        {
            while(cur_y>1)
            {
                cells.pb({cur_x, cur_y});
                cur_y--;
                cnt++;
            }

            cells.pb({cur_x, cur_y});
            cnt++;
            cur_x++;
            dir = 'R';
        }
    }

    int tube_sz = rng/k, cur_idx = 0;

    for(int i=1; i<k; i++)
    {
        cout<<tube_sz<<SS;

        for(int i=1; i<=tube_sz; i++)
        {
            cout<<cells[cur_idx].first<<SS<<cells[cur_idx].second<<" \n"[i==tube_sz];
            cur_idx++;
        }
    }

    cout<<rng-((k-1)*tube_sz)<<SS;

    while(cur_idx<rng)
    {
        cout<<cells[cur_idx].first<<SS<<cells[cur_idx].second<<" \n"[cur_idx+1==rng];
        cur_idx++;
    }
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
