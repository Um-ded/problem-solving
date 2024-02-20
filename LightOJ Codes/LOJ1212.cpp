/// Implemented using circular array. It can also be solved using built-in deque.

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

void solve()
{
    static int cs = 0;
    int n, m;
    cin>>n>>m;
    int dq[n] = {}, head = 0, tail = 0, sz = 0;
    cout<<"Case "<<++cs<<":"<<endl;

    for(int i=1; i<=m; i++)
    {
        string s;
        cin>>s;

        if(s == "pushLeft")
        {
            int x;
            cin>>x;

            if(sz < n)
            {
                cout<<"Pushed in left: "<<x<<endl;
                dq[head] = x;
                head = (head+n-1)%n;
                sz++;
            }
            else
                cout<<"The queue is full"<<endl;
        }
        else if(s == "pushRight")
        {
            int x;
            cin>>x;

            if(sz < n)
            {
                cout<<"Pushed in right: "<<x<<endl;
                tail = (tail+1)%n;
                dq[tail] = x;
                sz++;
            }
            else
                cout<<"The queue is full"<<endl;
        }
        else if(s == "popLeft")
        {
            if(sz > 0)
            {
                head = (head+1)%n;
                cout<<"Popped from left: "<<dq[head]<<endl;
                sz--;
            }
            else
                cout<<"The queue is empty"<<endl;
        }
        else if(s == "popRight")
        {
            if(sz > 0)
            {
                cout<<"Popped from right: "<<dq[tail]<<endl;
                tail = (tail+n-1)%n;
                sz--;
            }
            else
                cout<<"The queue is empty"<<endl;
        }
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
