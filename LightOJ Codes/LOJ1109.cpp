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

vi cnt;
vector<pii > order;

bool cmp(pii a, pii b)
{
    if((a.first<b.first) || (a.first==b.first && a.second>b.second))
        return true;

    return false;
}

void fun()
{
    cnt.assign(1005, 2);
    cnt[1] = 1;

    for(int i=2; i<=500; i++)
        for(int j=i+i; j<=1000; j+=i)
            cnt[j]++;

    for(int i=1; i<=1000; i++)
        order.pb({cnt[i], i});

    sort(order.begin(), order.end(), cmp);
}

void solve()
{
    static int cs = 0;
    int n;
    cin>>n;
    cout<<"Case "<<++cs<<": "<<order[n-1].second<<endl;
}

int main()
{
    noice

    fun();
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
