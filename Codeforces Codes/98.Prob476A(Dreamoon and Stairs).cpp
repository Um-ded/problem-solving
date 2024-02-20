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
    int n, m, ans;
    cin >> n >> m;

    if(n<m)
        cout << -1 << endl;
    else
    {
        ans = (n/2)+(n%2);

        if(ans%m != 0)
            ans += (m-(ans%m));

        cout << ans <<endl;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
