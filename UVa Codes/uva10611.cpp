#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int low_bnd(vi v, int n, int x)
{
    int Start=0, End=n-1, Mid;

    if(x > v[n-1])
        return n;

    if(x <= v[0])
        return -1;

    while(Start <= End)
    {
        Mid = Start+((End-Start)/2);

        if(v[Mid] >= x)
            End = Mid-1;
        else
            Start = Mid+1;
    }

    return Start;
}

int up_bnd(vi v, int n, int x)
{
    int Start=0, End=n-1, Mid;

    if(x >= v[n-1])
        return -1;

    while(Start <= End)
    {
        Mid = Start+((End-Start)/2);

        if(v[Mid] <= x)
            Start = Mid+1;
        else
            End = Mid-1;
    }

    return Start;
}

int main()
{
    wow

    int n, x, q, low, up;
    cin>>n;
    vi v(n);

    for(int i=0; i<n; i++)
        cin>>v[i];

    cin>>q;

    for(int i=1; i<=q; i++)
    {
        cin>>x;
        low = low_bnd(v, n, x);
        up = up_bnd(v, n, x);

        if(low == -1)
            cout<<"X ";
        else
            cout<<v[low-1]<<SS;

        if(up == -1)
            cout<<"X"<<endl;
        else
            cout<<v[up]<<endl;
    }

    return 0;
}
