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

    string s;
    ll sum=0;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        sum += s[i]-48;
    }

    cout << sum << end;
    return 0;
}
