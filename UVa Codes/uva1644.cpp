#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define sz                1299710
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[(sz>>5)+2], primes[100005], k=0;

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
    int n;

    while(cin>>n && n!=0)
    {
        if((n==2) || (n&1 && !Check(arr[n>>5], n&31)))
            cout<<0<<endl;
        else
        {
            int idx = upper_bound(primes, primes+k, n)-primes;
            int ans = primes[idx]-primes[idx-1];
            cout<<ans<<endl;
        }
    }

    return 0;
}
