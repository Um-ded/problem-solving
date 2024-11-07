///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, k, q;
    cin>>n>>k>>q;
    int arr[n+2][k+2];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=k; j++)
            cin>>arr[i][j];

    for(int i=2; i<=n; i++)
        for(int j=1; j<=k; j++)
            arr[i][j] |= arr[i-1][j];

    for(int a=1; a<=q; a++)
    {
        int m;
        cin>>m;
        int lo = n, hi = 1;

        for(int b=1; b<=m; b++)
        {
            int r, c;
            char o;
            cin>>r>>o>>c;

            if(o=='<')
            {
                int left=0;
                int right = n+1;

                while(left+1<right)
                {
                    int mid = left+((right-left)>>1);

                    if(arr[mid][r]<c)
                        left = mid;
                    else
                        right = mid;
                }

                lo = min(left, lo);
            }
            else
            {
                int left=0;
                int right = n+1;

                while(left+1<right)
                {
                    int mid = left+((right-left)>>1);

                    if(arr[mid][r]>c)
                        right = mid;
                    else
                        left = mid;
                }

                hi = max(right, hi);
            }
        }

        if(lo<hi)
            cout<<-1<<endl;
        else
            cout<<hi<<endl;
    }
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
