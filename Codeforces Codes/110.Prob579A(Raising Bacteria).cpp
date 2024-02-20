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
    int x, cnt=0;
    cin>>x;

    while(x)
    {
        if(x&1)
            cnt++;

        x >>= 1;
    }

    cout<<cnt<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
