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
#define EPS          1e-9
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int pouring_water(int a, int b, int c)
{
    int aa=a, bb=0, steps=1;

    while(1)
    {
        int transfer = min(aa, b-bb);
        aa -= transfer;
        bb += transfer;
        steps++;

        if(c==aa || c==bb)
            break;

        if(aa==0)
        {
            aa = a;
            steps++;
        }

        if(bb==b)
        {
            bb = 0;
            steps++;
        }
    }

    return steps;
}

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(c==0)
        cout<<0<<endl;
    else if(c==a || c==b)
        cout<<1<<endl;
    else if((c>a && c>b) || (c%gcd(a, b)))
        cout<<-1<<endl;
    else
        cout<<min(pouring_water(a, b, c), pouring_water(b, a, c))<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
