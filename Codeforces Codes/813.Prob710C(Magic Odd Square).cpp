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
    int n;
    cin>>n;
    int matrix[n+2][n+2];
    memset(matrix, 0, sizeof(matrix));
    int a = 1, b = 2, c = 2;

    for(int j=1; j<=n; j++)
    {
        matrix[(n+1)/2][j] = a;
        a += 2;
    }

    for(int i=((n+1)/2)-1; i>=1; i--)
    {
        for(int j=c; j<=n-c+1; j++)
        {
            matrix[i][j] = a;
            matrix[n-i+1][j] = a+2;
            a += 4;
        }

        c++;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][j] = b;
                b += 2;
            }

            cout<<matrix[i][j]<<" \n"[j==n];
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}