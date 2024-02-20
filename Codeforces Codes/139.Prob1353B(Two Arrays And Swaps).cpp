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
    int n, k;
    vi a, b;
    cin>>n>>k;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.pb(x);
    }

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        b.pb(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=n-1, j=0; i>=0; i--)
    {
        if(j == k)
            break;

        if(a[j]<b[i])
        {
            swap(a[j], b[i]);
            j++;
        }
    }

    for(int i=1; i<n; i++)
        a[i] += a[i-1];

    cout<<a[n-1]<<endl;
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
