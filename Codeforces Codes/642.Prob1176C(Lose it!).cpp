/// Implementation 1 - idea from editorial

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
    int n;
    cin>>n;
    vi v(n);
    int subsq_cnt[6]={};

    for(int i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]==4)
            subsq_cnt[0]++;
        else if(v[i]==8 && subsq_cnt[1]<subsq_cnt[0])
            subsq_cnt[1]++;
        else if(v[i]==15 && subsq_cnt[2]<subsq_cnt[1])
            subsq_cnt[2]++;
        else if(v[i]==16 && subsq_cnt[3]<subsq_cnt[2])
            subsq_cnt[3]++;
        else if(v[i]==23 && subsq_cnt[4]<subsq_cnt[3])
            subsq_cnt[4]++;
        else if(v[i]==42 && subsq_cnt[5]<subsq_cnt[4])
            subsq_cnt[5]++;
    }

    cout<<n-(6*subsq_cnt[5])<<endl;
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



/// Implementation 1 - my own idea

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
    int n;
    cin>>n;
    vi v(n), sq({4, 8, 15, 16, 23, 42});
    vi idx[6];

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        int x = lower_bound(sq.begin(), sq.end(), v[i])-sq.begin();
        idx[x].pb(i);
    }

    bool done = false;
    int cnt=0, pos[6]={};

    while(!done)
    {
        int i;

        for(i=1; i<6; i++)
        {
            while(pos[i]<idx[i].size() && idx[i][pos[i]]<idx[i-1][pos[i-1]])
                pos[i]++;

            if(pos[i]==idx[i].size())
            {
                done = true;
                break;
            }
        }

        if(i==6)
            cnt++;

        for(i=0; i<6; i++)
            pos[i]++;
    }

    cout<<n-(6*cnt)<<endl;
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
