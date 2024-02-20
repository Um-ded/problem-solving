///Smart approach

#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define ll           long long
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
    {
        int n, o=0, e=0;
        bool ok = 0;
        cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]&1)
                o++;
            else
                e++;
        }

        if((o/2)+(e/2)==n/2)
            ok = 1;

        if(!ok)
        {
            for(int i=0; i<n; i++)
                for(int j=i+1; j<n; j++)
                    if(abs(v[i]-v[j])==1)
                        ok = 1;
        }

        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}



///My approach

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
    int n, check[101]={0}, odd=0, even=0, pans1=0, pans2=0, ans=0;
    cin>>n;
    vi v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        check[v[i]]++;

        if(v[i]&1)
            odd++;
        else
            even++;
    }

    pans1 = (odd/2)+(even/2);

    for(int i=1; i<100; i++)
    {
        if(check[i] && check[i+1])
        {
            int cur = min(check[i], check[i+1]);
            pans2 += cur;
            check[i] -= cur;
            check[i+1] -= cur;

        }
    }

    ans = (n/2)-pans1;

    if(!ans)
        cout<<"YES"<<endl;
    else
    {
        if(ans<=pans2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
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
