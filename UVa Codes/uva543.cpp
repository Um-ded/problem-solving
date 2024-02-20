#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define sz           1000001
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool arr[sz];

void sieve()
{
    int i, j;

    for(i=3; (i*i)<sz; i+=2)
        if(!arr[i])
            for(j=(i*i); j<sz; j+=(i+i))
                arr[j] = 1;
}

int main()
{
    noice

    sieve();
    int n;

    while(cin>>n && n!=0)
    {
        for(int i=3; i<=(n-3); i+=2)
        {
            if(!arr[i] && !arr[n-i])
            {
                cout<<n<<" = "<<i<<" + "<<(n-i)<<endl;
                break;
            }
        }
    }

    return 0;
}
