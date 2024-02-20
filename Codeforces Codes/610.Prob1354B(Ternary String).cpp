///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    string s;
    cin>>s;
    bool arr[5] = {0};
    int sz = s.size();
    int ans = (2e5)+5;
    int b = 0;
    arr[s[0]-'0'] = true;
    int cnt = 1;
    bool yes = false;

    for(int i=1; i<sz; i++)
    {
        if(s[i]!=s[i-1])
        {
            if(!arr[s[i]-'0'])
            {
                arr[s[i]-'0'] = true;
                cnt++;

                if(cnt==3)
                {
                    yes = true;
                    ans = min(ans, i-b+1);
                    arr[s[b]-'0'] = false;
                    cnt--;
                    b = i-1;
                }
            }
            else
                b = i-1;
        }
        else if(s[i]==s[b] && s[i]==s[i-1])
            b = i;
    }

    if(yes)
        cout<<ans<<endl;
    else
        cout<<0<<endl;
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

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
