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

void op(set<int> &st1, set<int> &st2, int n, int mv, char &typ)
{
    while(!st1.empty())
    {
        auto it = st1.begin();
        int cur = *it;
        st1.erase(it);

        if(typ == '?')
        {
            int op1 = ((cur+mv+(n-1))%n)+1;
            int op2 = ((cur-mv+(n-1))%n)+1;
            st2.insert(op1);
            st2.insert(op2);
        }
        else if(typ == '0')
        {
            int op = ((cur+mv+(n-1))%n)+1;
            st2.insert(op);
        }
        else
        {
            int op = ((cur-mv+(n-1))%n)+1;
            st2.insert(op);
        }
    }
}

void solve()
{
    int n, m, x;
    cin>>n>>m>>x;
    set<int> st1 = {x}, st2;

    for(int i=0; i<m; i++)
    {
        int mv;
        char typ;
        cin>>mv>>typ;

        if(!(i&1))
            op(st1, st2, n, mv, typ);
        else
            op(st2, st1, n, mv, typ);
    }

    if(!(m&1))
    {
        cout<<st1.size()<<endl;

        for(auto u: st1)
            cout<<u<<SS;
    }
    else
    {
        cout<<st2.size()<<endl;

        for(auto u: st2)
            cout<<u<<SS;
    }

    cout<<endl;
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
