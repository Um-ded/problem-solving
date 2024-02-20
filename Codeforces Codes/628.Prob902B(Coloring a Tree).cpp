#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, cnt=1;
	cin>>n;
	vector<int> p(n+2), c(n+2);

	for(int i=2; i<=n; i++)
		cin>>p[i];

	for(int i=1; i<=n; i++)
	{
		cin>>c[i];

		if(i==1)
			continue;

		if(c[i]!=c[p[i]])
			cnt++;
	}

	cout<<cnt<<endl;
	return 0;
}
