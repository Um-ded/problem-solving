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
    int n, h, cnt=0, ans;
    cin>>n>>h;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;

        if(x>h)
            cnt++;
    }

    ans = (cnt*2)+(n-cnt);
    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
