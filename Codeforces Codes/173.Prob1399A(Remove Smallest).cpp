#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, flag=1;
        cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++)
            cin>>v[i];

        if(n == 1)
            cout<<"YES"<<endl;
        else
        {
            sort(v.begin(), v.end());

            for(int i=1; i<n; i++)
            {
                if(v[i]-v[i-1] > 1)
                {
                    flag = 0;
                    break;
                }
            }

            if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
