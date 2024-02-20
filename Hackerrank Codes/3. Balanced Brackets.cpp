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

bool balance(char a, char b)
{
    if(a=='(' && b==')')
        return true;
    else if(a=='{' && b=='}')
        return true;
    else if(a=='[' && b==']')
        return true;
    else
        return false;
}

void solve()
{
    string s;
    cin>>s;
    bool balanced = true;
    stack<char> stk;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
        else
        {
            if(stk.empty())
            {
                balanced = false;
                break;
            }
            else
            {
                if(balance(stk.top(), s[i]))
                    stk.pop();
                else
                {
                    balanced = false;
                    break;
                }
            }
        }
    }

    if(balanced && stk.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    wow

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
