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

    int n, m, r;
    string s = "ROYGBIV", str = "GBIV";
    cin >> n;
    m = n/7;
    r = n-(m*7);

    for(int i=1; i<=m; i++)
        cout << s;

    for(int i=0; i<r; i++)
        cout << str[i%4];

    cout << endl;
    return 0;
}
