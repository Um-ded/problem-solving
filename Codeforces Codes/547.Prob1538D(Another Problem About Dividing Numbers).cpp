///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define FT           first
#define SD           second
#define pb           push_back
#define ppb          pop_back
#define MP           make_pair
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define sz              100001
#define Check(n, pos)   (n&(1<<(pos)))
#define Set(n, pos)     n |= (1<<(pos))

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

int arr[(sz>>5)+2], prime[9600], idx=0;

void bitwise_sieve()
{
    prime[idx++] = 2;

    for(int i=3; (i*i)<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            for(int j=(i*i); j<sz; j+=(i<<1))
                Set(arr[j>>5], j&31);

    for(int i=3; i<sz; i+=2)
        if(!Check(arr[i>>5], i&31))
            prime[idx++] = i;
}

int prime_cnt(int n)
{
    int cnt=0;

    for(int i=0; ((ll)prime[i]*prime[i])<=(ll)n; i++)
    {
        while(!(n%prime[i]))
        {
            n /= prime[i];
            cnt++;
        }
    }

    if(n!=1)
        cnt++;

    return cnt;
}

void solve()
{
    int a, b, k;
    cin>>a>>b>>k;

    if(k==1)
    {
        if(a!=b && (a%b==0 || b%a==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

        return;
    }

    int cnta = prime_cnt(a);
    int cntb = prime_cnt(b);

    if(cnta+cntb>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    noice

    bitwise_sieve();
    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}

///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
