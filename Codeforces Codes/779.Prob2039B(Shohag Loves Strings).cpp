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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    string s;
    cin>>s;
    int sz = s.size();
    bool poss = false;

    if(sz==1 || (sz==2 && s[0]!=s[1]))
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=0; i<sz-1; i++)
    {
        if(i+2<sz && s[i]!=s[i+1] && s[i]!=s[i+2] && s[i+1]!=s[i+2])
        {
            cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
            poss = true;
            break;
        }
        else if(s[i]==s[i+1])
        {
            cout<<s[i]<<s[i+1]<<endl;
            poss = true;
            break;
        }
    }

    if(!poss)
        cout<<-1<<endl;
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
