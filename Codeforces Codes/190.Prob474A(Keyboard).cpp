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
#define vll          vector<long long>
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
    char c;
    cin>>c;
    string str;
    cin>>str;

    string s="qwertyuiopasdfghjkl;zxcvbnm,./";

    if(c == 'R')
    {
        for(int i=0; i<str.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(str[i] == s[j])
                {
                    str[i] = s[j-1];
                    break;
                }
            }
        }
    }
    else if(c == 'L')
    {
        for(int i=0; i<str.size(); i++)
        {
            for(int j=0; j<s.size(); j++)
            {
                if(str[i] == s[j])
                {
                    str[i] = s[j+1];
                    break;
                }
            }
        }
    }

    cout<<str<<endl;
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
