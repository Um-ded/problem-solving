#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b)
{
    if(a==0)
        return b;

    return gcd(b%a, a);
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++)
            cin>>v[i];

        int ans = gcd(v[0], v[1]);

        for(int i=2; i<n; i++)
            ans = gcd(ans, v[i]);

        if(ans!=1)
            cout<<-1<<endl;
        else
            cout<<n<<endl;
    }

    return 0;
}
