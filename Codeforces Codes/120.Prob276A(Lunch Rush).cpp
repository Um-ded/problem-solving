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

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, k, ans=INT_MIN;
    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        int f, t;
        cin>>f>>t;

        if(t>k)
            ans = max(ans, f-t+k);
        else
            ans = max(ans, f);
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
