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

    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c;

    d = max(a+b+c, a*b*c);
    e = max(d, a+b*c);
    f = max(e, a*b+c);
    g = max(f, (a+b)*c);
    h = max(g, a*(b+c));

    cout << h << endl;
    return 0;
}
