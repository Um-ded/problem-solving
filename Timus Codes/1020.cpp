#include <bits/stdc++.h>

using namespace std;

#define dbl   double
#define pi    acos(-1.0)

dbl xy(dbl x1, dbl y1, dbl x2, dbl y2)
{
    dbl x = x1-x2;
    dbl y = y1-y2;
    return sqrt(x*x + y*y);
}

int main()
{
    int n;
    dbl r, ans=0.0;
    cin>>n>>r;
    dbl a[n+2][4];

    for(int i=0; i<n; ++i)
    {
        cin>>a[i][0]>>a[i][1];

        if(i>0)
            ans += xy(a[i][0], a[i][1], a[i-1][0], a[i-1][1]);
    }

    ans += xy(a[0][0], a[0][1], a[n-1][0], a[n-1][1])+(2.0*pi*r);
    cout<<fixed<<setprecision(2)<<ans<<endl;

    return 0;
}
