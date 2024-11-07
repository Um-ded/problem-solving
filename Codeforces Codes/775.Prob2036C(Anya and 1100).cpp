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
    int q, cnt = 0;
    cin>>s>>q;
    int sz = s.size();

    for(int i=0; i<sz-3; i++)
        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
            cnt++;

    for(int i=0; i<q; i++)
    {
        int x;
        char y;
        cin>>x>>y;
        int a = max(x-3-1, 0);
        int b = min(sz-1, x+3-1);
        int tmp = 0;

        for(int i=a; i<=b-3; i++)
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                tmp++;

        cnt -= tmp;
        tmp = 0;

        s[x-1] = y;

        for(int i=a; i<=b-3; i++)
            if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0')
                tmp++;

        cnt += tmp;

        if(cnt>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
