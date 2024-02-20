#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
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
    int q;
    cin>>q;

    while(q--)
    {
        ll n, a, b, x, ans=0;
        cin>>n>>a>>b;

        x = n%2;
        n /= 2;

        ans = (n*min(2*a, b))+(x*a);
        cout<<ans<<endl;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
