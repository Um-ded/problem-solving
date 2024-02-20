#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, d, st=0;
    cin >> n >> d;
    int t[n+2];

    for(int i=0; i<n; i++)
    {
        cin >> t[i];
        st += t[i];
    }

    if((((n-1)*10)+st) <= d)
        cout << (d-st)/5 << endl;
    else
        cout << -1 << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
