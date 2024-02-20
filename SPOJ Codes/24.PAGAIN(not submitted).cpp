#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define sz                100001
#define Set(n, pos)       n |= (1LL<<(pos))
#define Check(n, pos)     (n&(1LL<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

ll arr[(sz>>6)+2], primes[9600];

void bitwise_sieve()
{
    ll i, j, k=0;
    primes[k++] = 2;

    for(i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>6], i&63))
            for(j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>6], j&63);

    for(i=3; i<sz; i+=2)
        if(!Check(arr[i>>6], i&63))
            primes[k++] = i;
}

bool isprime(ll n)
{
	for(ll i=0; primes[i]*primes[i]<=n; i++)
		if(!(n%primes[i]))
			return 0;

	return 1;
}

int main()
{
    noice

    bitwise_sieve();
    int t=1;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        if(n==3)
            cout<<2<<endl;
        else
        {
            if(n&1)
                n -= 2;
            else
                n--;

            if(n<sz)
            {
                for( ; ; n-=2)
                {
                    if(!Check(arr[n>>6], n&63))
                    {
                        cout<<n<<endl;
                        break;
                    }
                }
            }
            else
            {
                for( ; ; n-=2)
                {
                    if(isprime(n))
                    {
                        cout<<n<<endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
