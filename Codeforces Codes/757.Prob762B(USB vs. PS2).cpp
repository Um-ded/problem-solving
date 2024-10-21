///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-18
#define gcd          __gcd
#define pb           push_back
#define ppb          pop_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vb           vector<bool>
#define pii          pair<int, int>
#define vll          vector<long long>
#define pll          pair<long long, long long>
#define vvi          vector<vector<int> >
#define vvll         vector<vector<long long> >
#define mod          ((long long)1000000007)
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int a, b, c, m;
    vll usb, ps2;
    cin>>a>>b>>c>>m;
    usb.pb(0);
    ps2.pb(0);

    for(int i=1; i<=m; i++)
    {
        ll x;
        string s;
        cin>>x>>s;

        if(s=="USB")
            usb.pb(x);
        else
            ps2.pb(x);
    }

    sort(usb.begin()+1, usb.end());
    sort(ps2.begin()+1, ps2.end());
    int usz = usb.size()-1;
    int psz = ps2.size()-1;

    for(int i=1; i<=usz; i++)
        usb[i] += usb[i-1];

    for(int i=1; i<=psz; i++)
        ps2[i] += ps2[i-1];

    int cnt = 0, y = min(a, usz), z = min(b, psz);
    ll ans = 0;
    cnt += y+z;
    ans += usb[y]+ps2[z];

    while((y<usz || z<psz) && c)
    {
        if(y>=usz)
        {
            while(c && z<psz)
            {
                c--;
                cnt++;
                ans += ps2[z+1]-ps2[z];
                z++;
            }
        }
        else if(z>=psz)
        {
            while(c && y<usz)
            {
                c--;
                cnt++;
                ans += usb[y+1]-usb[y];
                y++;
            }
        }
        else
        {
            c--;
            cnt++;

            if((usb[y+1]-usb[y])<=(ps2[z+1]-ps2[z]))
            {
                ans += usb[y+1]-usb[y];
                y++;
            }
            else
            {
                ans += ps2[z+1]-ps2[z];
                z++;
            }
        }
    }

    cout<<cnt<<SS<<ans<<endl;
}

int main()
{
    noice

    int t=1;
    //cin>>t;

    while(t--)
        solve();

    return 0;
}
