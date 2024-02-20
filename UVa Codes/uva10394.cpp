#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define lulu         110005
#define mx           20000005
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

bool a[mx];
int twin[lulu];

void sieve()
{
    int i, j, root;
    a[0] = a[1] = 1;
    root = sqrt(mx)+1;

    for(i=4; i<mx; i+=2)
        a[i] = 1;

    for(i=3; i<=root; i+=2)
        if(!a[i])
            for(j=i*i; j<mx; j+=(i+i))
                a[j] = 1;
}

void twin_prime()
{
    int j=1;

    for(int i=3; i<mx; i++)
        if(a[i] == 0 && a[i+2] == 0)
            twin[j++] = i;
}

int main()
{
    wow

    sieve();
    twin_prime();
    int n;

    while(cin>>n)
        cout<<"("<<twin[n]<<", "<<twin[n]+2<<")"<<endl;

    return 0;
}
