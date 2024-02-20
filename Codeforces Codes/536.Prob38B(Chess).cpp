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
    string s, t;
    cin>>s>>t;
    int r1 = s[0]-96;
    int r2 = s[1]-48;
    int k1 = t[0]-96;
    int k2 = t[1]-48;
    set<pii > st;
    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[] = {2, 1, -1, -2, 2, 1, -1, -2};
    st.insert({r1, r2});
    st.insert({k1, k2});

    for(int i=1; i<=8; i++)
        st.insert({r1, i});

    for(int i=1; i<=8; i++)
        st.insert({i, r2});

    for(int i=0; i<8; i++)
    {
        int x = r1+dx[i];
        int y = r2+dy[i];

        if(x>=1 && x<=8 && y>=1 && y<=8)
            st.insert({x, y});
    }

    for(int i=0; i<8; i++)
    {
        int x = k1+dx[i];
        int y = k2+dy[i];

        if(x>=1 && x<=8 && y>=1 && y<=8)
            st.insert({x, y});
    }

    cout<<(64-st.size())<<endl;
}

int main()
{
    noice

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
