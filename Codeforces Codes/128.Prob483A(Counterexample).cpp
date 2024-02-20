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

typedef long long       ll;
typedef double          dbl;

void solve()
{
    ll l, r;
    cin>>l>>r;

    if(l&1)
        l++;

    if(l+2 > r)
        cout<<-1<<endl;
    else
        cout<<l<<ss<<l+1<<ss<<l+2<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
