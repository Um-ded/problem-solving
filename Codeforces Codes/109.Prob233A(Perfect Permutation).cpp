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
    int n;
    cin>>n;

    if(n&1)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        vi v;

        for(int i=0; i<n; i++)
        {
            if(i&1)
                cout<<i;
            else
                cout<<i+2;

            cout<<" \n"[i == n-1];
        }
    }
}

int main()
{
    wow

    solve();

    return 0;
}
