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

    string a, b;
    cin >> a >> b;

    cout << a.length() << ss << b.length() << end;
    cout << a+b << end;

    swap(a[0], b[0]);
    cout << a << ss << b << end;

    return 0;
}
