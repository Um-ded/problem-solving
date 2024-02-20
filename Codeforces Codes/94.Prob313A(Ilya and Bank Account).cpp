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
    int n, ans;
    cin >> n;

    if(n >= 0)
        ans = n;
    else
    {
        int a, b;
        n *= -1;
        a = n%10;
        b = (n/10)%10;

        if(a >= b)
            ans = (n/10)*(-1);
        else
            ans = ((n/10)-(b-a))*(-1);
    }

    cout << ans << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
