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

void solve()
{
    int n, k1, k2;
    cin>>n;
    deque<int> q1, q2;
    cin>>k1;

    for(int i=0; i<k1; i++)
    {
        int x;
        cin>>x;
        q1.push_back(x);
    }

    cin>>k2;

    for(int i=0; i<k2; i++)
    {
        int x;
        cin>>x;
        q2.push_back(x);
    }

    int cnt = 0;
    bool ok = true;

    while(1)
    {
        int x = q1.front();
        q1.pop_front();
        int y = q2.front();
        q2.pop_front();

        if(x<y)
        {
            q2.push_back(x);
            q2.push_back(y);
        }
        else
        {
            q1.push_back(y);
            q1.push_back(x);
        }

        cnt++;

        if(q1.empty() || q2.empty())
            break;

        if(cnt>=100000)
        {
            ok = false;
            break;
        }
    }

    if(ok)
    {
        cout<<cnt<<SS;

        if(q1.empty())
            cout<<2<<endl;
        else
            cout<<1<<endl;
    }
    else
        cout<<-1<<endl;
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
