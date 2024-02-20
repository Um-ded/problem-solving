#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
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
    string s;
    cin>>s;
    ll cnt=0, n=s.size();

    for(ll i=0; i<n; i++)
        if(s[i]=='4' || s[i]=='7')
            cnt++;

    if(cnt<4)
    {
        cout<<"NO"<<endl;
        return;
    }

    while(cnt != 0)
    {
        ll t = cnt%10;
        cnt /= 10;

        if(t!=4 && t!=7)
        {
            cout<<"NO"<<endl;
            return;
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
