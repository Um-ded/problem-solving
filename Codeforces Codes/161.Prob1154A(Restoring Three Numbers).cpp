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
    int a[5]={0};
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a, a+4);

    for(int i=0; i<3; i++)
        cout<<a[3]-a[i]<<" \n"[i == 2];
}

int main()
{
    wow

    solve();

    return 0;
}
