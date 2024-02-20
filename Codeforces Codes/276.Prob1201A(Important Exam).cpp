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
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, m, cnt=0;
    cin>>n>>m;
    vector<string> vn(n);
    vi vm(m);
    string ans;

    for(int i=0; i<n; i++)
        cin>>vn[i];

    for(int i=0; i<m; i++)
        cin>>vm[i];

    for(int j=0; j<m; j++)
    {
        int alpha[5]={0}, mx=INT_MIN, mxi=-1;

        for(int i=0; i<n; i++)
            alpha[vn[i][j]-65]++;

        for(int i=0; i<5; i++)
        {
            if(mx<alpha[i])
            {
                mx = alpha[i];
                mxi = i;
            }
        }

        char c = mxi+65;
        ans += c;
    }

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(vn[i][j]==ans[j])
                cnt += vm[j];

    cout<<cnt<<endl;
}

int main()
{
    wow

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
