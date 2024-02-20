#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, a, b, c, ans=0;
    cin>>n>>a>>b>>c;

    for(int x=0; x<=4000; x++)
    {
        for(int y=0; y<=4000; y++)
        {
            int temp = n-(x*a+y*b);

            if(temp<0)
                break;

            if(temp%c == 0)
            {
                int z = temp/c;
                ans = max(ans, x+y+z);
            }
        }
    }

    cout<<ans<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
