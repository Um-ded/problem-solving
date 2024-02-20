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
    int n;
    cin>>n;
    vi v(n+n), a(n), b;

    for(int i=0; i<n+n; i++)
    {
        cin>>v[i];

        if(a[v[i]-1] == 0)
        {
            a[v[i]-1] = 1;
            b.pb(v[i]);
        }
    }

    for(int i=0; i<b.size(); i++)
        cout<<b[i]<<" \n"[i == b.size()-1];

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
