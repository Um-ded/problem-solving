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
#define sz           1001
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

vi fact[sz];

void factorial()
{
    fact[0].pb(1);

    for(int i=1; i<sz; i++)
    {
        int carry=0;

        for(int j=0; j<fact[i-1].size(); j++)
        {
            int prod = (fact[i-1][j]*i)+carry;
            fact[i].pb(prod%10);
            carry = prod/10;
        }

        while(carry)
        {
            fact[i].pb(carry%10);
            carry /= 10;
        }
    }
}

void solve()
{
    int n;

    while(cin>>n)
    {
        cout<<n<<"!\n";

        for(int i=fact[n].size()-1; i>=0; i--)
            cout<<fact[n][i];

        cout<<endl;
    }
}

int main()
{
    noice

    factorial();

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
