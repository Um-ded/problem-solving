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
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    string s;
    int sz, sum=0;
    vi v(3);
    cin>>s;
    sz = s.size();

    for(int i=0; i<sz; i++)
    {
        v[(s[i]-48)%3]++;
        sum += s[i]-48;
    }

    sum %= 3;

    if(sum == 0)
        cout<<0<<endl;
    else if(sum == 1)
    {
        if(sz>1 && v[1]>=1)
            cout<<1<<endl;
        else if(sz>2 && v[2]>=2)
            cout<<2<<endl;
        else
            cout<<-1<<endl;
    }
    else
    {
        if(sz>1 && v[2]>=1)
            cout<<1<<endl;
        else if(sz>2 && v[1]>=2)
            cout<<2<<endl;
        else
            cout<<-1<<endl;
    }
}

int main()
{
    wow

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
