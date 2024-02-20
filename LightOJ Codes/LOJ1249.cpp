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

int I;

void solve()
{
    int n, mn, mx, mni=0, mxi=0;
    cin>>n;
    vector<string> s(n);
    vi v(n);

    for(int i=0; i<n; i++)
    {
        int a, b, c;
        cin>>s[i]>>a>>b>>c;
        v[i] = a*b*c;
    }

    mn = v[0];
    mx = v[0];

    for(int i=1; i<n; i++)
    {
        if(v[i] < mn)
        {
            mn = v[i];
            mni = i;
        }
        else if(v[i] > mx)
        {
            mx = v[i];
            mxi = i;
        }
    }

    if(mn == mx)
        cout<<"Case "<<++I<<": "<<"no thief"<<endl;
    else
        cout<<"Case "<<++I<<": "<<s[mxi]<<" took chocolate from "<<s[mni]<<endl;
}

int main()
{
    //wow

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
