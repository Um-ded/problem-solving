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
    int a, b, temp, ans;
    cin>>a>>b;

    temp = abs(a-b);

    if(temp%10 == 0)
        ans = (temp/10);
    else
        ans = (temp/10)+1;

    cout<<ans<<endl;
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
