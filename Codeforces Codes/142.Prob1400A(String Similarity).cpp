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
    ///solution 1
//    int n;
//    string s;
//    cin>>n>>s;
//    n *= 2;
//
//    for(int i=0; i<n; i+=2)
//        cout<<s[i];
//
//    cout<<endl;

    ///solution 2
    int n;
    string s;
    cin>>n>>s;

    for(int i=0; i<n; i++)
        cout<<s[n-1];

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
