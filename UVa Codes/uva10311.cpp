#include <bits/stdc++.h>

#define endl              "\n"
#define sz                100000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int arr[(sz>>5)+2];

void bitwise_sieve()
{
    for(int i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(int j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);
}

int main()
{
    noice

    bitwise_sieve();
    int n;

    while(cin>>n)
    {
        if(n>=5)
        {
            if(n&1)
            {
                if(!Check(arr[(n-2)>>5], (n-2)&31))
                    cout<<n<<" is the sum of 2 and "<<(n-2)<<"."<<endl;
                else
                    cout<<n<<" is not the sum of two primes!"<<endl;
            }
            else
            {
                bool flag = 0;
                int i= n>>1;

                if(i&1)
                    i-=2;
                else
                    i--;

                for( ; i>=3; i-=2)
                {
                    if((!Check(arr[i>>5], i&31)) && (!Check(arr[(n-i)>>5], (n-i)&31)))
                    {
                        cout<<n<<" is the sum of "<<i<<" and "<<(n-i)<<"."<<endl;
                        flag = 1;
                        break;
                    }
                }

                if(!flag)
                    cout<<n<<" is not the sum of two primes!"<<endl;
            }
        }
        else
            cout<<n<<" is not the sum of two primes!"<<endl;
    }

    return 0;
}
