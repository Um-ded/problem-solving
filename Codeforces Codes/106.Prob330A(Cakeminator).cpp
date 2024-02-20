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
    int r, c, ans=0;
    cin>>r>>c;
    char cake[r+2][c+2];

    for(int i=0; i<r; i++)
        cin>>cake[i];

    for(int i=0; i<r; i++)
    {
        int flag = 1;

        for(int j=0; j<c; j++)
        {
            if(cake[i][j] == 'S')
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            for(int k=0; k<c; k++)
                cake[i][k] = '0';
    }

    for(int j=0; j<c; j++)
    {
        int flag = 1;

        for(int i=0; i<r; i++)
        {
            if(cake[i][j] == 'S')
            {
                flag = 0;
                break;
            }
        }

        if(flag)
            for(int k=0; k<r; k++)
                cake[k][j] = '0';
    }

    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            if(cake[i][j] == '0')
                ans++;

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
