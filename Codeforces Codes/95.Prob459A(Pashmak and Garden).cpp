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
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    if(abs(x1-x2) == abs(y1-y2))
    {
        x3 = x1;
        x4 = x2;
        y3 = y2;
        y4 = y1;

        cout<<x3<<ss<<y3<<ss<<x4<<ss<<y4<<endl;
    }
    else if(x1 == x2)
    {
        x3 = x4 = x1 + abs(y1-y2);
        y3 = y1;
        y4 = y2;

        cout<<x3<<ss<<y3<<ss<<x4<<ss<<y4<<endl;
    }
    else if(y1 == y2)
    {
        x3 = x1;
        x4 = x2;
        y3 = y4 = y1 + abs(x1-x2);

        cout<<x3<<ss<<y3<<ss<<x4<<ss<<y4<<endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    wow

    solve();

    return 0;
}
