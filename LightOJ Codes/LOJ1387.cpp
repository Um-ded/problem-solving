#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int I;

void solve()
{
    int n, x=0;
    cin>>n;
    cout<<"Case "<<I<<":\n";

    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;

        if(s == "report")
            cout<<x<<endl;
        else if(s == "donate")
        {
            int y;
            cin>>y;
            x += y;
        }
    }
}

int main()
{
    int t=1;
    cin>>t;

    for(I=1; I<=t; I++)
        solve();

    return 0;
}
