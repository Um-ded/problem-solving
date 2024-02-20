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

    string s;
    ll sum, cnt=0;
    cin >> s;

    while(s[1])
    {
        sum = 0;
        cnt++;
        for(int i=0; s[i]; i++)
            sum += (s[i]-48);

        s = to_string(sum);
    }

    cout << cnt << endl;
    return 0;
}
