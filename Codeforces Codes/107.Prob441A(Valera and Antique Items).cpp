#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, v;
    cin >> n >> v;

    vi ans;

    for(int i=0; i<n; i++)
    {
        bool u = false;
        int k, s;
        cin >> k;

        for(int j=0; j<k; j++)
        {
            cin >> s;
            if ((!u) && (v>s))
            {
                u = true;
                ans.push_back(i);
            }
        }
    }

    cout << ans.size() << endl;

    for(int i=0; i<ans.size(); i++)
        cout << ans[i]+1 << " \n"[i == ans.size()-1];
}

int main()
{
    wow

    solve();

    return 0;
}
