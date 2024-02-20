#include<bits/stdc++.h>

using namespace std;

#define endl  "\n"

int main()
{
	int x;
	double y, ans;
	cin>>x>>y;
	ans = y-x-.5;

	if(x%5==0 && ans>=0)
        cout<<fixed<<setprecision(2)<<ans<<endl;
    else
        cout<<fixed<<setprecision(2)<<y<<endl;

	return 0;
}
