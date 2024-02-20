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
    int arr[n+2], brr[n+2];

    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<=n; i++)
        cin>>brr[i];

    sort(arr+1, arr+n+1, greater<>());
    sort(brr+1, brr+n+1, greater<>());

    int x = n-(n/4);
    int y = x;
    int cnt1 = 0;
    int cnt2 = 0;
    int k = n;

    for(int i=1; i<=x; i++)
    {
        cnt1 += arr[i];
        cnt2 += brr[i];
    }

    while(cnt1<cnt2)
    {
        k++;

        if(k%4==0)
        {
            if(x>0)
                cnt1 += 100-arr[x--];
        }
        else
        {
            if(y<n)
                cnt2 += brr[++y];

            cnt1 += 100;
        }
    }

    cout<<k-n<<endl;
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
