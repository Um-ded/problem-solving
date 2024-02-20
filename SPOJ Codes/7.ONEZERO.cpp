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
#define ST           second
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
#define mod          (long long)998244353
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

ll is_divisible(string &s, ll n)
{
    ll rem=0;

    for(ll i=0; i<s.size(); i++)
    {
        rem = (rem*10)+(s[i]-'0');
        rem %= n;
    }

    return rem;
}

string bfs(ll n)
{
    queue<string> q;
    set<ll> remainders;
    q.push("1");

    while(!q.empty())
    {
        string cur = q.front();
        q.pop();
        ll rem = is_divisible(cur, n);

        if(!rem)
            return cur;
        else if(remainders.find(rem) == remainders.end())
        {
            remainders.insert(rem);
            q.push(cur+'0');
            q.push(cur+'1');
        }
    }
}

void solve()
{
    ll n;
    string ans;
    cin>>n;
    ans = bfs(n);
    cout<<ans<<endl;
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
