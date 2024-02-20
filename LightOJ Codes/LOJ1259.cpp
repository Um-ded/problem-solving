#include <bits/stdc++.h>

#define endl              "\n"
#define sz                10000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int arr[(sz>>5)+2], primes[664585], k=0;

void bitwise_sieve()
{
    for(int i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(int j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);

    primes[k++] = 2;

    for(int i=3; i<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            primes[k++] = i;
}

int main()
{
    noice

    bitwise_sieve();
    int t=1, cs=0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n==4)
        {
            cout<<"Case "<<++cs<<": "<<1<<endl;
            continue;
        }

        int ans = 0;
        int nn = (n>>1)&1?n>>1:(n>>1)-1;
        int i = upper_bound(primes, primes+k, nn)-primes;
        i--;

        for( ; i>0; i--)
            if(!Check(arr[(n-primes[i])>>5], (n-primes[i])&31))
                ans++;

        cout<<"Case "<<++cs<<": "<<ans<<endl;
    }

    return 0;
}
