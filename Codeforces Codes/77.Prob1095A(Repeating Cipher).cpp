#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
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

    int l;
    string s;
    cin >> l >> s;

    for(int i=1; ((i*(i+1)/2)-1)<l; i++)
    {
        cout << s[(i*(i+1)/2)-1];
    }
    puts("");

    return 0;
}
