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
    int a, b, n;
    bool ispal = 1;
    string s;
    cin>>a>>b>>s;
    n = a+b;

    if(a&1 && b&1)
    {
        cout<<-1<<endl;
        return;
    }

    for(int i=0; i<(n>>1); i++){
        if(s[i]=='?' || s[n-i-1]=='?'){
            if(s[i]=='0' || s[n-i-1]=='0') s[i] = '0', s[n-i-1] = '0', a -= 2;
            else if(s[i]=='1' || s[n-i-1]=='1') s[i] = '1', s[n-i-1] = '1', b -= 2;
        }
        else{
            if(s[i]=='0') a -= 2;
            else b -= 2;
        }
    }

    for(int i=0; i<=(n>>1); i++){
        if(n&1 && i==(n>>1)){
            if(s[i]=='?'){
                if(a&1) s[i] = '0', a--;
                else s[i] = '1', b--;
            }
            else{
                if(s[i]=='0') a--;
                else b--;
            }
        }

        if(s[i]=='?'){
            if(a>=2) s[i] = '0', s[n-i-1] = '0', a -= 2;
            else s[i] = '1', s[n-i-1] = '1', b -= 2;
        }
    }

    for(int i=0; i<=(n>>1); i++){
        if(s[i]!=s[n-i-1]){
            ispal = 0;
            break;
        }
    }

    if(a==0 && b==0 && ispal) cout<<s<<endl;
    else cout<<-1<<endl;
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
