///Approach 1

#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define sz                100000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[(sz>>5)+2], primes[5761460], k=0;

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
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(binary_search(primes, primes+k, n))
        {
            int idx = upper_bound(primes, primes+k, n)-primes;
            int dscrmnt = (8*idx)+1;
            int row = sqrt(dscrmnt);

            if(row*row<dscrmnt)
                row++;

            row--;
            row = (row+1)/2;///Taking the Ceil value
            int x = ((row-1)*row)/2;
            int col = idx-x;
            cout<<row<<" "<<col<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}



///Approach 2

#include <bits/stdc++.h>

using namespace std;

#define endl              "\n"
#define sz                100000001
#define Set(n, pos)       n |= (1<<(pos))
#define Check(n, pos)     (n&(1<<(pos)))
#define noice             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int arr[(sz>>5)+2], primes[5761460], k=0;

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
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(binary_search(primes, primes+k, n))
        {
            int idx = upper_bound(primes, primes+k, n)-primes;
            int dscrmnt = (8*idx)+1;
            int row = sqrt(dscrmnt);

            if(row*row<dscrmnt)
                row++;

            row--;
            row /= 2;
            int x = ((row-1)*row)/2;
            int col = idx-x;

            if(col>row)///Checking if the Row value is less than the Column value
            {
                col -= row;
                row++;
            }

            cout<<row<<" "<<col<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
