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

typedef long long       ll;
typedef double          dbl;

int sod(int x)
{
    int sum=0;
    while(x)
    {
        sum += x%10;
        x /= 10;
    }
    return sum;
}

void solve()
{
    int a, n;
    cin>>a;

    while(1)
    {
        n = sod(a);
        if(n%4 == 0)
        {
            cout<<a<<endl;
            return;
        }

        a++;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
