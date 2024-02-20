#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		ll n, k;
		cin>>n>>k;
		ll cnt = 0, nn = 1;

		while(nn<k)
		{
			nn += min(nn, k);
			cnt++;
		}

		n -= nn;
		cnt += (n+k-1)/k;
		cout<<cnt<<endl;
	}

	return 0;
}
