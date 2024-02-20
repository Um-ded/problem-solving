#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    wow

    dbl n, p, k;

    while(cin>>n>>p)
    {
        k = pow(p, 1/n);
        cout<<fixed<<setprecision(0)<<k<<endl;
    }

    return 0;
}
