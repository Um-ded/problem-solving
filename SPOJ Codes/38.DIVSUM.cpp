#include<bits/stdc++.h>

using namespace std;

#define endl    "\n"

typedef long long   ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n!=1)
        {
            ll sum = 1;

            for(int i=2; (i*i)<=n; i++)
            {
                if(n%i==0)
                {
                    if(i==n/i)
                        sum += i;
                    else
                        sum += i+(n/i);
                }
            }

            cout<<sum<<endl;
        }
        else
            cout<<0<<endl;
    }

    return 0;
}
