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
    int n, mx, mn, ans=0;
    cin>>n;
    vi v(n);

    for(auto &i:v)
        cin>>i;

    mx = mn = v[0];

    for(int i=1; i<n; i++)
    {
        if(v[i] > mx)
        {
            mx = v[i];
            ans++;
        }
        else if(v[i] < mn)
        {
            mn = v[i];
            ans++;
        }
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
