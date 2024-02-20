#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    wow

    int n, ans=10, x, sum;
    cin >> n;

    while(n--)
    {
        ans += 9;
        x = ans;
        sum = 0;

        while(x)
        {
            sum += x%10;
            x /= 10;
        }

        if(sum != 10)
            n++;
    }

    cout << ans << endl;
    return 0;
}
