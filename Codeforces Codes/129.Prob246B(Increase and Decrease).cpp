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

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n;
    ull sum=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        sum += x;
    }

    if(sum%n == 0)
        cout<<n<<endl;
    else
        cout<<n-1<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
