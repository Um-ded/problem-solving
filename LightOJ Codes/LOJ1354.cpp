#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vll          vector<long long>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int I;

ll bin_to_dec(ll n)
{
    ll a=0, b=0;

    while(n != 0)
    {
        ll x = n%10;
        a += x*pow(2, b);
        n /= 10;
        b++;
    }

    return a;
}

void solve()
{
    ll a, b, c, d, e, f, g, h;
    char ch;
    cin>>a>>ch>>b>>ch>>c>>ch>>d;
    cin>>e>>ch>>f>>ch>>g>>ch>>h;

    if((bin_to_dec(e) == a) && (bin_to_dec(f) == b) && (bin_to_dec(g) == c) && (bin_to_dec(h) == d))
        cout<<"Case "<<I<<": Yes"<<endl;
    else
        cout<<"Case "<<I<<": No"<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    for(I=1; I<=t; I++)
        solve();

    return 0;
}
