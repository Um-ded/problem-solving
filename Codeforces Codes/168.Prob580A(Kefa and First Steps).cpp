#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vll          vector<long long>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    ll n, ans=0, tmp=1;
    cin>>n;
    vll v(n);

    for(ll i=0; i<n; i++)
        cin>>v[i];

    for(ll i=0; i<n-1; i++)
    {
        if(v[i] <= v[i+1])
            tmp++;
        else
        {
            ans = max(ans, tmp);
            tmp = 1;
        }
    }

    cout<<max(ans, tmp)<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
