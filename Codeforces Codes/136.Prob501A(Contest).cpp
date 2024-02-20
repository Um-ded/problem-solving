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

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int a, b, c, d, x, y;
    cin>>a>>b>>c>>d;

    x = max(3*a/10, a-(a*c/250));
    y = max(3*b/10, b-(b*d/250));

    if(x>y)
        cout<<"Misha";
    else if(x<y)
        cout<<"Vasya";
    else
        cout<<"Tie";

    cout<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
