#include <bits/stdc++.h>

using namespace std;

#define SS                " "
#define endl              "\n"
#define sz                100000001
#define pb                push_back
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int k=1, arr[(sz>>5)+2], prime[5761460];

void bitwise_sieve()
{
    int i, j;
    prime[k++] = 2;

    for(i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);

    for(i=3; i<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            prime[k++] = i;
}

int main()
{
    noice

    bitwise_sieve();
    int t=1;
    cin>>t;

    while(t--)
    {
        int idx;
        cin>>idx;
        cout<<prime[idx]<<endl;
    }

    return 0;
}
