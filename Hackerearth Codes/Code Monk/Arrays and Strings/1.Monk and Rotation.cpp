#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t=1;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);

        for(int i=0; i<n; i++)
            cin>>v[i];

        if(k%n)
        {
            int nn = (((k/n)+1)*n);
            nn -= k;

            for(int i=nn; i<n; i++)
                cout<<v[i]<<" ";

            for(int i=0; i<nn; i++)
                cout<<v[i]<<" \n"[i==nn-1];
        }
        else
        {
            for(int i=0; i<n; i++)
                cout<<v[i]<<" \n"[i==n-1];
        }
    }

    return 0;
}
