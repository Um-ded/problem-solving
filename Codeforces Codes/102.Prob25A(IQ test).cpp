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
    int n, e=0, o=0, le, lo;
    cin >> n;
    int arr[n+2];

    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];

        if(arr[i]&1)
        {
            o++;
            lo = i;
        }
        else
        {
            e++;
            le = i;
        }
    }

    if(e == 1)
        cout << le << endl;
    else
        cout << lo << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
