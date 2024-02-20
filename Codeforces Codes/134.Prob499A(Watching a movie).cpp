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
    int n, x, j=1, ans=0;
    cin>>n>>x;

    while(n--)
    {
        int l, r;
        cin>>l>>r;

        while(j+x <= l)
            j += x;

        ans += r-j+1;
        j = r+1;
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
