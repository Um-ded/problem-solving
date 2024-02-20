#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int ans=0, szs, szt;
    string s, t;
    cin>>s>>t;
    szs = s.size();
    szt = t.size();

    for(int i=0; i<szt; i++)
        if(t[i] == s[ans])
            ans++;

    cout<<ans+1<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
