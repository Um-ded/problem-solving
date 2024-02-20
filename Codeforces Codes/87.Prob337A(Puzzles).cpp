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

int main()
{
    wow

    int n, m, ans;
    cin >> n >> m;
    int arr[m+5];

    for(int i=0; i<m; i++)
        cin >> arr[i];

    sort(arr, arr+m);
    ans = arr[n-1]-arr[0];

    for(int i=1; i<=(m-n); i++)
        ans = min(ans, (arr[i+n-1]-arr[i]));

    cout << ans << endl;
    return 0;
}
