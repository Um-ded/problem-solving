#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define sz                1000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[(sz>>5)+2];
vector<int> digit_prime;

void bitwise_sieve()
{
    Set(arr[0], 1);
    digit_prime.push_back(2);

    for(int i=4; i<sz; i+=2)
        Set(arr[i>>5], i&31);

    for(int i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(int j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);

    for(int i=3; i<sz; i+=2)
    {
        if(!Check(arr[i>>5], i&31))
        {
            int cur = 0;
            int ii = i;

            while(ii)
            {
                cur += ii%10;
                ii /= 10;
            }

            if(!Check(arr[cur>>5], cur&31))
                digit_prime.push_back(i);
        }
    }
}

int main()
{
    noice

    bitwise_sieve();

    int t=1;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int x = lower_bound(digit_prime.begin(), digit_prime.end(), a)-digit_prime.begin();
        int y = upper_bound(digit_prime.begin(), digit_prime.end(), b)-digit_prime.begin();
        int ans = y-x;
        cout<<ans<<endl;
    }

    return 0;
}
