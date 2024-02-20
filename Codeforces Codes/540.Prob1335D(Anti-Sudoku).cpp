/// I solved This problem by choosing 9 indexes but this problem can be solved
/// pretty easily. Just change all the occurances of a number to any other number
/// (for example: change all the 2 to 1). And it will be an Anti-Sudoku!

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

int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int y[] = {1, 4, 7, 2, 5, 8, 3, 6, 9};
char grid[11][11];

void solve()
{
    for(int i=1; i<=9; i++)
        for(int j=1; j<=9; j++)
            cin>>grid[i][j];

    for(int i=0; i<9; i++)
    {
        if(grid[x[i]][y[i]]=='9')
            grid[x[i]][y[i]] = '1';
        else
            grid[x[i]][y[i]] = '9';
    }

    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
            cout<<grid[i][j];

        cout<<endl;
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
