#include <bits/stdc++.h>

#define endl              "\n"
#define sz                1000001
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

    while(cin>>n && n!=0)
    {
        cout<<n<<":"<<endl;

        if(n>=5)
        {
            if(n&1)
            {
                if(!Check(arr[(n-2)>>5], (n-2)&31))
                    cout<<2<<'+'<<(n-2)<<endl;
                else
                    cout<<"NO WAY!"<<endl;
            }
            else
            {
                for(int i=3; i<=n; i+=2)
                {
                    if((!Check(arr[i>>5], i&31)) && (!Check(arr[(n-i)>>5], (n-i)&31)))
                    {
                        cout<<i<<'+'<<(n-i)<<endl;
                        break;
                    }
                }
            }
        }
        else if(n==4)
            cout<<"2+2"<<endl;
        else
            cout<<"NO WAY!"<<endl;
    }

    return 0;
}
