#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define ll           long long
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll gcd(ll a, ll b)
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
        int a;
        string b;
        cin>>a>>b;

        if(a==0)
        {
            cout<<b<<endl;
            continue;
        }

        int rem=0;

        for(int i=0; i<b.size(); i++)
        {
            rem = (rem*10)+(b[i]-'0');
            rem %= a;
        }

        int ans = gcd(a, rem);
        cout<<ans<<endl;
    }

    return 0;
}
