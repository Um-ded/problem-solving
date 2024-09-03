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
    bool ab = false, ba = false;
    int abaORbab = 0, sz = s.size();

    for(int i=0; i<sz-2; i++)
    {
        if((s[i]=='A' && s[i+1]=='B' && s[i+2]=='A') || (s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'))
        {
            s[i] = s[i+1] = s[i+2] = '.';
            abaORbab++;
        }
    }

    for(int i=0; i<sz-1; i++)
    {
        if(s[i]=='A' && s[i+1]=='B' && !ab)
        {
            ab = true;
            i++;
        }
        else if(s[i]=='B' && s[i+1]=='A' && !ba)
        {
            ba = true;
            i++;
        }
    }

    if(ab && ba)
        cout<<"YES"<<endl;
    else
    {
        int koytaNai = (ab^1)+(ba^1);

        if(koytaNai <= abaORbab)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
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
