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
    int n, x, ans=0;
    cin >> n >> x;

    for(int i=1; i<=n; i++)
        if(x%i == 0)
            if(x/i <= n)
                ans++;

    cout << ans << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
