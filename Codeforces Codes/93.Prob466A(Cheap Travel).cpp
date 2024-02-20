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
    int n, m, a, b, x, ans;
    cin >> n >> m >> a >> b;
    x = b/m;

    if(x < a)
        ans = ((n/m)*b)+min(((n%m)*a), b);
    else
        ans = n*a;

    cout << ans << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
