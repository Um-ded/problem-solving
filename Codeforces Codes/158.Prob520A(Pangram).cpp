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
    string s;
    int n, check[26]={0};
    cin>>n>>s;

    if(n<26)
    {
        cout<<"NO"<<endl;
        return;
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        s[i] = tolower(s[i]);

        if(check[s[i]-97] == 0)
        {
            check[s[i]-97] = 1;
            cnt++;
        }
    }

    if(cnt == 26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
