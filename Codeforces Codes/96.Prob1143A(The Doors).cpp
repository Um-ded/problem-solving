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
    int n, r=0, l=0;
    cin >> n;
    int door[n+2];

    for(int i=0; i<n; i++)
    {
        cin >> door[i];

        if(door[i])
            r++;
        else
            l++;
    }

    for(int i=0; i<n; i++)
    {
        if(door[i])
            r--;
        else
            l--;

        if((r == 0) || (l == 0))
        {
            cout << i+1 << endl;
            break;
        }
    }
}

int main()
{
    wow

    solve();

    return 0;
}
