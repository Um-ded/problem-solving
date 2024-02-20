///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
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

const int SzN = 1000005, SzBase = 1005;
double fact_logs[SzN], base_logs[SzBase];

void pre_calc()
{
    for(int i=2; i<SzBase; i++)
        base_logs[i] = log10(i);

    for(int i=1; i<SzN; i++)
        fact_logs[i] = log10(i)+fact_logs[i-1];
}

void solve()
{
    static int cs = 0;
    int n, base;
    cin>>n>>base;
    double log_value = fact_logs[n]/base_logs[base];
    int digits = log_value+1;
    cout<<"Case "<<++cs<<": "<<digits<<endl;
}

int main()
{
    noice

    pre_calc();
    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
