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
    cin >> s;
    int l = s.size();

    for(int i=0; i<l-2; i++)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            s[i] = '0';
            s[i+1] = '0';
            s[i+2] = '0';
        }
    }

    for(int i=0; i<l; i++)
    {
        if(s[i] != '0')
            cout << s[i];

        if(s[i] != '0' && s[i+1] == '0')
            cout << ss;
    }
    puts("");

    return 0;
}
