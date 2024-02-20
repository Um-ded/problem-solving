#include <iostream>
#include <algorithm>

using namespace std;

#define endl              "\n"
#define sz                10001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[(sz>>5)+2], primes[1240], k=0;

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

    for(int i=1; i<k; i++)
        primes[i] += primes[i-1];
}

int main()
{
    noice

    bitwise_sieve();
    int n;

    while(cin>>n && n!=0)
    {
        int ans = 0;

        if(binary_search(primes, primes+k, n))
            ans++;

        int l = 0;
        int r = upper_bound(primes, primes+k, n)-primes;

        while(l<k && r<k)
        {
            while(primes[r]-primes[l]>n)
                l++;

            if(primes[r]-primes[l]==n)
                ans++;

            r++;
        }

        cout<<ans<<endl;
    }

    return 0;
}
