#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, cnt=0, arr[26]={0};
    cin>>n;
    char s[n+1][n+1];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>>s[i][j];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[s[i][j]-97]++;

            if(arr[s[i][j]-97] == 1)
                cnt++;

            if(s[i][i] != s[0][0] || s[i][n-i-1] != s[0][0])
            {
                cout<<"NO"<<endl;
                return;
            }

            if(cnt > 2)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    if(cnt == 2 && arr[s[0][0]-97] == ((2*n)-1) && arr[s[0][1]-97] == ((n-1)*(n-1)))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
