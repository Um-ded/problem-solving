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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    bool ok=1;
    string s[3];
    map<char, int> mp;
    mp['A'] = mp['B'] = mp['C'] = 50;

    for(int i=0; i<3; i++)
        cin>>s[i];

    for(int i=0; i<3; i++)
    {
        if(s[i][1]=='<')
            mp[s[i][0]] = min(mp[s[i][0]], mp[s[i][2]]-5);
        else
            mp[s[i][2]] = min(mp[s[i][2]], mp[s[i][0]]-5);
    }

    for(int i=0; i<3; i++)
    {
        if(s[i][1]=='<')
            mp[s[i][0]] = min(mp[s[i][0]], mp[s[i][2]]-5);
        else
            mp[s[i][2]] = min(mp[s[i][2]], mp[s[i][0]]-5);
    }

    for(int i=0; i<3; i++)
    {
        if(s[i][1]=='<' && mp[s[i][0]]<mp[s[i][2]])
            continue;
        else if(s[i][1]=='>' && mp[s[i][0]]>mp[s[i][2]])
            continue;
        else
        {
            ok = 0;
            break;
        }
    }

    if(ok)
    {
        map<int, char> mpp;

        for(auto i:mp)
            mpp[i.second] = i.first;

        for(auto i:mpp)
            cout<<i.second;

        cout<<endl;
    }
    else
        cout<<"Impossible"<<endl;
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
