#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define sz           1001
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool arr[sz];
int primes[180], lame_problem[sz];

void sieve()
{
    int i, j, k=0;
    primes[k++] = 2;

    for(i=3; i*i<sz; i+=2)
        if(!arr[i])
            for(j=i*i; j<sz; j+=i+i)
                arr[j] = 1;

    for(i=3; i<sz; i+=2)
        if(!arr[i])
            primes[k++] = i;

    for(int i=1; primes[i]+primes[i-1]+1<sz; i++)
         if(!arr[primes[i]+primes[i-1]+1])
            lame_problem[primes[i]+primes[i-1]+1] = 1;


    for(int i=1; i<sz; i++)
        lame_problem[i] += lame_problem[i-1];
}

int main()
{
    noice

    sieve();
    int n, k;
    cin>>n>>k;

    if(lame_problem[n]>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
