#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
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
    int a[26]={0};
    string r, s, t;
    cin>>r>>s>>t;
    int sr=r.size(), ss=s.size(), st=t.size();

    for(int i=0; i<sr; i++)
        a[r[i]-65]++;

    for(int i=0; i<ss; i++)
        a[s[i]-65]++;

    for(int i=0; i<st; i++)
        a[t[i]-65]--;

    for(int i=0; i<26; i++)
    {
        if(a[i] != 0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
