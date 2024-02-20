///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int x;
    pair<int, char> a, b;
    cin>>a.first>>b.first>>x;
    vector<char> v(x+1);
    a.second = '0';
    b.second = '1';

    if(a.first<b.first)
        swap(a, b);

    for(int i=0; i<=x; i+=2)
    {
        v[i] = a.second;
        a.first--;
    }

    for(int i=1; i<=x; i+=2)
    {
        v[i] = b.second;
        b.first--;
    }

    for(int i=0; i<a.first; i++)
        cout<<a.second;

    for(int i=0; i<x; i++)
        cout<<v[i];

    if(x&1)
    {
        cout<<v[x];

        for(int i=0; i<b.first; i++)
            cout<<b.second;
    }
    else
    {
        for(int i=0; i<b.first; i++)
            cout<<b.second;

        cout<<v[x];
    }

    cout<<endl;
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
