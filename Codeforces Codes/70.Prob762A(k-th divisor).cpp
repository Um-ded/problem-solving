#include <bits/stdc++.h>

#define ss           " "
#define end          "\n"
#define PI           acos(-1.0)
#define MOD          1000000007
#define pb           push_back
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef vector<int>            vi;
typedef vector<ll>             vl;
typedef vector<vector<int> >   vvi;



int main()
{
    wow

    ll n, k, i, j, cnt=0;
    cin >> n >> k;
    ll arr[100000];

    for(i=1, j=0; i<=sqrt(n); i++)
    {
    	if(n%i == 0)
    	{
    		arr[++j] = i;
    		cnt++;
    	}
    }

    for(i=j; i>=1; i--)
    	if(n/arr[i] != arr[i])
    		arr[++cnt] = n/arr[i];

    if(cnt < k)
    	cout << -1 << end;
    else
    	cout << arr[k] << end;

    return 0;
}