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
    int n, c=0, bi=0, ba=0;
    vi v;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.pb(x);

        if(i%3 == 0)
            c += v[i];
        else if(i%3 == 1)
            bi += v[i];
        else
            ba += v[i];
    }

    if(c>bi && c>ba)
        cout<<"chest"<<endl;
    else if(bi>c && bi>ba)
        cout<<"biceps"<<endl;
    else
        cout<<"back"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
