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
#define pb           push_back
#define mp           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define pii          pair<int,int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

struct trio
{
    int a, b, c;
};

bool cmp(trio aa, trio bb)
{
    if(aa.a==bb.a)
        return aa.b<bb.b;

    return aa.a<bb.a;
}

void solve()
{
    int k;
    cin>>k;
    vector<trio> v;

    for(int i=0; i<k; i++)
    {
        int n, sum=0;
        cin>>n;
        vi vv(n);

        for(int j=0; j<n; j++)
        {
            cin>>vv[j];
            sum += vv[j];
        }

        for(int j=0; j<n; j++)
            v.pb({sum-vv[j], i+1, j+1});
    }

    sort(v.begin(), v.end(), cmp);

    for(int i=1; i<v.size(); i++)
    {
        if(v[i-1].a==v[i].a && v[i-1].b!=v[i].b)
        {
            cout<<"YES"<<endl;
            cout<<v[i-1].b<<SS<<v[i-1].c<<endl;
            cout<<v[i].b<<SS<<v[i].c<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
