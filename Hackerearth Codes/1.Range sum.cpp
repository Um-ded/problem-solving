#include <bits/stdc++.h>

#define ss           " "
#define end          "\n"
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

    int t, n, q, l, r, i;
    cin >> t;

    while(t--)
    {
        cin >> n;
        ll arr[n+2];

        arr[0] = 0;
        for(i=1; i<=n; i++)
        {
            cin >> arr[i];
            arr[i] += arr[i-1];
        }

        cin >> q;

        while(q--)
        {
            cin >> l >> r;
            cout << arr[r]-arr[l-1] << end;
        }
    }

    return 0;
}
