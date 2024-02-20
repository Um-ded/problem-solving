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
    int n;
    string s, ans;
    cin>>n>>s;
    map<int, int> mp;
    int divs[] = {2, 3, 5, 7};
    int fact[10]={1};

    for(int i=1; i<10; i++)
        fact[i] = i*fact[i-1];

    for(int i=0; i<n; i++)
    {
        if(s[i]<'2')
            continue;

        int cur = fact[s[i]-'0'];

        for(int j=0; j<4; j++)
        {
            int cnt = 0;

            while(!(cur%divs[j]))
            {
                cnt++;
                cur /= divs[j];
            }

            mp[divs[j]] += cnt;
        }
    }

    mp[2] -= mp[7]*4;
    mp[3] -= mp[7]*2;
    mp[5] -= mp[7];
    mp[2] -= mp[5]*3;
    mp[3] -= mp[5];
    mp[2] -= mp[3];

    for(int i=3; i>=0; i--)
        for(int j=0; j<mp[divs[i]]; j++)
            ans.pb(divs[i]+'0');

    cout<<ans<<endl;
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
