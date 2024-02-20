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

    int n, m;
    cin >> n >> m;
    char flg[n+2][m+2];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> flg[i][j];

    for(int i=0; i<n; i++)
        for(int j=0; j<m-1; j++)
            if(flg[i][j] != flg[i][j+1])
            {
                cout << "NO" << endl;
                return 0;
            }

    for(int i=0; i<n-1; i++)
        if(flg[i][0] == flg[i+1][0])
        {
            cout << "NO" << endl;
            return 0;
        }

    cout << "YES" << endl;
    return 0;
}
