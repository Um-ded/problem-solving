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

ll lcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

void solve()
{
    string s;
    bool pr=0;

    while(cin>>s)
    {
        int l=s.size(), m4=0, m15=0, m55=0, m100=0, m400=0;
        bool fl=0, leap=0;

        if(pr != 0)
            cout<<endl;

        pr = 1;

        for(int i=0; i<l; i++)
        {
            m4 = ((m4*10)+(s[i]-'0'))%4;
            m15 = ((m15*10)+(s[i]-'0'))%15;
            m55 = ((m55*10)+(s[i]-'0'))%55;
            m100 = ((m100*10)+(s[i]-'0'))%100;
            m400 = ((m400*10)+(s[i]-'0'))%400;
        }

        if((m400 == 0) || (m4 == 0 && m100 != 0))
        {
            cout<<"This is leap year."<<endl;
            leap = 1;
            fl = 1;
        }

        if(m15 == 0)
        {
            cout<<"This is huluculu festival year."<<endl;
            fl = 1;
        }

        if(leap == 1 && m55 == 0)
            cout<<"This is bulukulu festival year."<<endl;

        if(fl == 0)
            cout<<"This is an ordinary year."<<endl;

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
