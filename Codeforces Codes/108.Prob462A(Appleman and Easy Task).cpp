#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, cnt;
    cin>>n;
    char a[n+2][n+2];

    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cnt = 0;

            if(j>0 && a[i][j-1] == 'o')
                cnt++;

            if(j<(n-1) && a[i][j+1]=='o')
                cnt++;

            if(i>0 && a[i-1][j]=='o')
                cnt++;

            if(i<(n-1) && a[i+1][j]=='o')
                cnt++;

            if(cnt&1)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
