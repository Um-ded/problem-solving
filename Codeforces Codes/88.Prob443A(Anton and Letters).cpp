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

int arr[26];

int main()
{
    wow

    int cnt=0;
    string s;
    getline(cin, s);

    for(int i=0; s[i]; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            if(arr[s[i]-97] == 0)
            {
                arr[s[i]-97] = 1;
                cnt++;
            }
    }

    cout << cnt << endl;
    return 0;
}
