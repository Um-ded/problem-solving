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
    int n, ans;
    cin>>n;
    ans = n/2;
    cout<<ans<<endl;

    if(n&1)
    {
        for(int i=1; i<ans; i++)
            cout<<2<<ss;

        cout<<3<<endl;
    }
    else
    {
        for(int i=1; i<=ans; i++)
            cout<<2<<" \n"[i == ans];
    }
}

int main()
{
    wow

    solve();

    return 0;
}
