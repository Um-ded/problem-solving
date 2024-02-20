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
    string s;
    cin>>s;
    map<char, int> mp;
    bool yes = true;
    int sz = s.size();
    s = '$'+s;
    char mx = 'a';

    for(int i=1; i<=sz; i++)
    {
        if((mp[s[i]]!=0) || (s[i]-96>sz))
        {
            yes = false;
            break;
        }

        mp[s[i]] = i;
        mx = max(mx, s[i]);
    }

    if(mp['a']==0)
    {
        cout<<"NO"<<endl;
        return;
    }

    int l = mp['a'], r = mp['a'];

    for(char ch = 'b'; ch<=mx; ch++)
    {
        if(mp[ch]==l-1)
        {
            l--;
        }
        else if(mp[ch]==r+1)
        {
            r++;
        }
        else
        {
            yes = false;
            break;
        }
    }

    if(yes)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
