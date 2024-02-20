#include <bits/stdc++.h>

#define endl         "\n"
#define sz           50000///sqrt of upper bound of R
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;

bool arr[sz];
vector<ll> prime;

void sieve()
{
    ll i, j, k=0;
    prime.push_back(2);

    for(i=3; (i*i)<sz; i+=2)
        if(!arr[i])
            for(j=(i*i); j<sz; j+=(i+i))
                arr[j] = 1;

    for(i=3; i<sz; i+=2)
        if(!arr[i])
            prime.push_back(i);
}

int segmented_sieve(ll l, ll r)
{
    ll i, status[r-l+5]={0};
    int ret = 0;

    if(l<=2 && 2<=r)
        ret++;

    for(i=1; prime[i]*prime[i]<=r; i++)
    {
        ll j = ((l+prime[i]-1)/prime[i])*prime[i];

        if(!(j&1))
            j += prime[i];

        if(prime[i]*prime[i]>j)
            j = prime[i]*prime[i];

        for(; j<=r; j+=(prime[i]+prime[i]))
            status[j-l] = 1;
    }

    i = l;

    if(!(i&1))
        i++;

    for(; i<=r; i+=2)
        if(!status[i-l] && i!=1)
            ret++;

    return ret;
}

int main()
{
    noice

    sieve();
    ll t=1;
    cin>>t;

    for(int cs=1; cs<=t; cs++)
    {
        ll l, r;
        cin>>l>>r;
        cout<<"Case "<<cs<<": "<<segmented_sieve(l, r)<<endl;
    }

    return 0;
}
