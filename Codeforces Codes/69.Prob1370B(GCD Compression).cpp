#include <bits/stdc++.h>

#define ss           " "
#define end          "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, x, i;
    vi odd, even;
    cin >> n;

    for(i=1; i<=2*n; i++)
    {
        cin >> x;

        if(x&1)
            odd.pb(i);
        else
            even.pb(i);
    }

    if((odd.size())&1)
    {
        odd.pop_back();
        even.pop_back();
    }
    else if(odd.size() >= 2)
    {
        odd.pop_back();
        odd.pop_back();
    }
    else
    {
        even.pop_back();
        even.pop_back();
    }

    for(i=0; i<odd.size(); i+=2)
        cout << odd[i] << ss << odd[i+1] << end;

    for(i=0; i<even.size(); i+=2)
        cout << even[i] << ss << even[i+1] << end;
}


int main()
{
    wow

    int t;
    cin >> t;

    while(t--)
        solve();

    return 0;
}
