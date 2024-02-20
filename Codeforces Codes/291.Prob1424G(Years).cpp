///using vector of pairs
///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

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

void solve()
{
    ll n, cur=0, mx=0, yr=0;
    cin>>n;
    vector<pll> v;

    for(ll i=1; i<=n; i++)
    {
        ll x, y;
        cin>>x>>y;
        v.pb({x, 1});
        v.pb({y, -1});
    }

    sort(v.begin(), v.end());

    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if((it->second)==-1)
            cur--;
        else
            cur++;

        if(mx<cur)
        {
            mx = cur;
            yr = it->first;
        }
    }

    cout<<yr<<SS<<mx<<endl;
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



///using map
/////*/////////////////////////////*///
///// IN THE NAME OF ALMIGHTY ALLAH ///
/////*/////////////////////////////*///
//
/////*////////////////////*///
///// Author : SAIFULLAH29 ///
/////*////////////////////*///
//
/////*//////////////////////////////////////////*///
///// "When you want something, all the universe ///
/////  conspires in helping you to achieve it."  ///
/////              - Paulo Coelho, The Alchemist ///
/////*//////////////////////////////////////////*///
//
//#include <bits/stdc++.h>
//
//#define SS           " "
//#define endl         "\n"
//#define EPS          1e-9
//#define gcd          __gcd
//#define pb           push_back
//#define mp           make_pair
//#define pi           acos(-1.0)
//#define Ars          greater<int>()
//#define vi           vector<int>
//#define pii          pair<int,int>
//#define vll          vector<long long>
//#define pll          pair<long long, long long>
//#define vvi          vector<vector<int> >
//#define mod          (long long)998244353
//#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
//#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//using namespace std;
//
//typedef long long              ll;
//typedef double                 dbl;
//typedef unsigned long long     ull;
//
//void solve()
//{
//    ll n, cur=0, mx=0, yr=0;
//    cin>>n;
//    map<ll, ll> mp;
//
//    for(ll i=1; i<=n; i++)
//    {
//        ll x, y;
//        cin>>x>>y;
//        mp[x]++;
//        mp[y]--;
//    }
//
//    for(auto it=mp.begin(); it!=mp.end(); it++)
//    {
//        cur += it->second;
//
//        if(mx<cur)
//        {
//            mx = cur;
//            yr = it->first;
//        }
//    }
//
//    cout<<yr<<SS<<mx<<endl;
//}
//
//int main()
//{
//    noice
//
//    int t=1;
//    //cin>>t;
//
//    while(t--)
//        solve();
//
//    return 0;
//}
//
/////*////////////////////////////////////////////*///
///// "There is only one thing that makes a dream  ///
///// impossible to achieve: the fear of failure." ///
/////                - Paulo Coelho, The Alchemist ///
/////*////////////////////////////////////////////*///
