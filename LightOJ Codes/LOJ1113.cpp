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
#define mod          (long long)1000000007
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    static int cs=0;
    string cur="http://www.lightoj.com/";
    stack<string> frwrd, bck;
    cout<<"Case "<<++cs<<":"<<endl;

    while(1)
    {
        string s;
        cin>>s;

        if(s=="VISIT")
        {
            string t;
            cin>>t;
            bck.push(cur);
            cur = t;
            frwrd = stack<string>();
            cout<<cur<<endl;
        }
        else if(s=="FORWARD")
        {
            if(frwrd.empty())
                cout<<"Ignored"<<endl;
            else
            {
                bck.push(cur);
                cur = frwrd.top();
                frwrd.pop();
                cout<<cur<<endl;
            }
        }
        else if(s=="BACK")
        {
            if(bck.empty())
                cout<<"Ignored"<<endl;
            else
            {
                frwrd.push(cur);
                cur = bck.top();
                bck.pop();
                cout<<cur<<endl;
            }
        }
        else
            break;
    }
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
