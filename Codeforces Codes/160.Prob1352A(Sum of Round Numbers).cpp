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

int pw(int n, int p)
{
    int res=1;

    for(int i=1; i<=p; i++)
        res *= n;

    return res;
}

void solve()
{
    string s;
    cin>>s;
    int n=s.size(), cnt=0;

    for(int i=0; i<n; i++)
        if(s[i]-48 != 0)
            cnt++;

    cout<<cnt<<endl;

    for(int i=0; i<n; i++)
    {
        if((s[i]-48) != 0)
        {
            int x = (s[i]-48)*pw(10, (n-i-1));
            cout<<x<<SS;
        }
    }

    cout<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
