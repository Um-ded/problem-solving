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

    int t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;

        if(n%4 == 0)
            cout << "YES" << end;
        else
            cout << "NO" << end;
    }

    return 0;
}
