#include <bits/stdc++.h>

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long    ll;

const int N = 1125, K = 15;
ll dp[N+5][K+5];
bool check[N+5];
vector<int> primes = {2};

void sieve()
{
    for(int i=3; (i*i)<=N; i+=2)
        if(!check[i])
            for(int j=(i*i); j<=N; j+=(i+i))
                check[j] = true;

    for(int i=3; i<=N; i+=2)
        if(!check[i])
            primes.push_back(i);
}

void pre_calc()
{
    dp[0][0] = 1;

    for(int i=0; i<primes.size(); i++)
    {
        for(int j=N; j>=1; j--)
        {
            if(primes[i]>j)
                break;

            for(int k=K; k>=1; k--)
                dp[j][k] += dp[j-primes[i]][k-1];
        }
    }
}

void solve()
{
    int n, k;

    while((cin>>n>>k) && (n || k))
        cout<<dp[n][k]<<endl;
}

int main()
{
    noice

    sieve();
    pre_calc();
    int t = 1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
