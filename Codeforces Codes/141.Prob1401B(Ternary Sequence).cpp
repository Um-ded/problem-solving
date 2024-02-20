#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int x0, x1, x2, y0, y1, y2, ans, temp;
    cin>>x0>>x1>>x2>>y0>>y1>>y2;

    temp = min(x1, y0);
    x1 -= temp;
    y0 -= temp;

    temp = min(x0, y2);
    x0 -= temp;
    y2 -= temp;

    temp = min(x2, y1);
    x2 -= temp;
    y1 -= temp;
    ans = 2*temp;

    ans -= 2*min(x1, y2);
    cout<<ans<<endl;

}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
