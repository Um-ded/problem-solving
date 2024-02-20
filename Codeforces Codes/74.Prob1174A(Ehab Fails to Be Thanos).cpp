#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;


int main()
{
    wow

    int n, m, cnt1=0, cnt2=0;
    cin >> n;
    int arr[2*n+5];
    m = 2*n;

    for(int i=0; i<m; i++)
        cin >> arr[i];

    sort(arr, arr+m);

    for(int i=0; i<n; i++)
    {
        cnt1 += arr[i];
        cnt2 += arr[i+n];
    }

    if(cnt1 == cnt2)
        cout << -1 << endl;
    else
    {
        for(int i=0; i<m; i++)
        cout << arr[i] << ss;
    }
    puts("");

    return 0;
}
