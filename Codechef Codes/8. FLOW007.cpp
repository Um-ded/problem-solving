///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define gcd          __gcd
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
    cin>>s;
    int l=s.size();
    for(int i=(l-1); i>0; i--)
    {
        if(s[i] == '0')
            s.pop_back();
        else
            break;
    }

    reverse(s.begin(), s.end());
    cout<<s<<endl;
}

int main()
{
    wow

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
