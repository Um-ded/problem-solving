#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    for(ll i=2; i*i<=n; i++)
        while(n%(i*i) == 0)
            n /= i;

    cout<<n<<endl;
	return 0;
}
