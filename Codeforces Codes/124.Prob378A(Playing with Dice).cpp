#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int a, b, x=0, y=0, d=0;
    cin>>a>>b;

    for(int i=1; i<=6; i++)
    {
        if(abs(a-i) < abs(b-i))
            x++;
        else if(abs(a-i) > abs(b-i))
            y++;
        else
            d++;
    }

    cout<<x<<ss<<d<<ss<<y<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
