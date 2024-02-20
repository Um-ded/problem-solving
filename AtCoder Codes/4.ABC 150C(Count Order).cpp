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

ll lcm(ll a, ll b)
{
    return (a/gcd(a, b))*b;
}

void solve()
{
    ///C done
    int n, x=1, y=1, ans;
    cin>>n;
    vi a(n), b(n), c(n);

    for(int i=0; i<n; i++)
        a[i] = i+1;

    for(int i=0; i<n; i++)
        cin>>b[i];

    for(int i=0; i<n; i++)
        cin>>c[i];

    if(a != b)
    {
        while(next_permutation(a.begin(), a.end()))
        {
            x++;

            if(a == b)
                break;
        }
    }

    for(int i=0; i<n; i++)
        a[i] = i+1;

    if(a != c)
    {
        while(next_permutation(a.begin(), a.end()))
        {
            y++;

            if(a == c)
                break;
        }
    }

    ans = abs(y-x);
    cout<<ans<<endl;
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
