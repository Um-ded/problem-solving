#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define size         6
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
    ll n, k, mid;
    cin >> n >> k;
    mid = (n+1)/2;

    if(k <= mid)
        cout << 2*k-1 << endl;
    else
        cout << (k-mid)*2 << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
