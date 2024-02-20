#include <bits/stdc++.h>

using namespace std;

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

    int n;

    while(cin>>n)
    {
        if(!n)
            break;

        int ans = 0;

        for(int i=1; i<n; i++)
            for(int j=i+1; j<=n; j++)
                ans += gcd(i, j);

        cout<<ans<<endl;
    }

    return 0;
}
