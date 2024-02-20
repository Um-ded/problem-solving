#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, xo, yo, ans;
    cin>>n>>xo>>yo;
    map<pair<int, int>, bool> cnt;
    bool zero, inf;
    zero = inf = false;

    for(int i=1; i<=n; i++)
    {
        int x, y, dx, dy, g;
        cin>>x>>y;
        dx = xo-x;
        dy = yo-y;
        g = __gcd(dx, dy);
        dx /= g;
        dy /= g;

        if(dx==0 || dy==0)
        {
            if(dx==0)
                zero = true;
            else
                inf = true;

            continue;
        }
        else if(dx<0 && dy<0)
        {
            dx = abs(dx);
            dy = abs(dy);
        }
        else if((dx<0 && dy>0) || (dx>0 && dy<0))
        {
            dx = abs(dx);
            dy = abs(dy);
            dx *= -1;
        }

        cnt[{dx, dy}] = true;
    }

    ans = cnt.size()+zero+inf;
    cout<<ans<<endl;
    return 0;
}
