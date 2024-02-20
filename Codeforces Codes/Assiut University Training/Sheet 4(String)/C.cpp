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

    string x, y;
    cin >> x>> y;

    if(y.compare(x) <= 0)
        cout << y << end;
    else
        cout << x << end;

    return 0;
}
