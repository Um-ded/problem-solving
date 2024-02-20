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
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, tot=0, ans=INT_MAX;
    cin>>n;
    vi v(n+2);
    vector<int> check[n+2];
    int arr[n+2]= {0};

    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        check[v[i]].pb(i);

        if(arr[v[i]]==0)
            tot++;

        arr[v[i]]++;
    }

    if(tot == 1)
        cout<<0<<endl;
    else if(arr[v[1]]==1 || arr[v[n]]==1)
        cout<<1<<endl;
    else if(v[1]==v[n] && arr[v[1]]==2)
        cout<<1<<endl;
    else
    {
        for(int i=1; i<=n; i++)
        {
            int temp=0;

            if(check[i].size()==1)
                temp = 2;
            else if(check[i].size()>0)
            {
                for(int j=0; j<check[i].size()-1; j++)
                    if(check[i][j+1]-check[i][j] != 1)
                        temp++;

                if(check[i][0]!=1)
                    temp++;

                if(check[i][check[i].size()-1]!=n)
                    temp++;
            }

            if(temp)
                ans = min(ans, temp);
        }

        cout<<ans<<endl;
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
