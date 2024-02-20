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
    int n, c, p=0;
    cin>>n>>c;
    vector <int> v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<n-1; i++)
        p = max(p, (v[i]-v[i+1]));

    if((p-c) > 0)
        cout<<(p-c)<<endl;
    else
        cout<<0<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
