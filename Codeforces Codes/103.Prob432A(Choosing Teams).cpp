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
    int n, k, ans=0;
    cin >> n >> k;
    int arr[n+2];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    for(int i=n-1; i>=0; i--)
    {
        if((5-arr[i]) >= k)
        {
            ans = i+1;
            break;
        }
    }

    cout << ans/3 <<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
