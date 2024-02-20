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
    int n, odd=0, even=0, ans=0;
    string s;
    cin>>n>>s;

    if(n == 1)
    {
        if((s[0]-48)&1)
            ans = 1;
        else
            ans = 2;
    }
    else if(n&1)
    {
        for(int i=0; i<n; i+=2)
        {
            if((s[i]-48)&1)
                odd++;
            else
                even++;
        }

        if(odd >= 1)
            ans = 1;
        else
            ans = 2;
    }
    else
    {
        for(int i=1; i<n; i+=2)
        {
            if((s[i]-48)&1)
                odd++;
            else
                even++;
        }

        if(even >= 1)
            ans = 2;
        else
            ans = 1;
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
