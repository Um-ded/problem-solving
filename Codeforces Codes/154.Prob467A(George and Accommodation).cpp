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
    int n, cnt=0;
    cin>>n;

    while(n--)
    {
        int a, b;
        cin>>a>>b;

        if((a+2)<=b)
            cnt++;
    }

    cout<<cnt<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
