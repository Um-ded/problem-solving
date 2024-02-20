#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, s=0, sc=0, d=0, dc=0;
    vi v;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    while(!v.empty())
    {
        if(sc == dc)
        {
            if((*v.begin()) < v.back())
            {
                s += v.back();
                v.pop_back();
            }
            else
            {
                s += *v.begin();
                v.erase(v.begin());
            }

            sc++;
        }
        else
        {
            if((*v.begin()) < v.back())
            {
                d += v.back();
                v.pop_back();
            }
            else
            {
                d += *v.begin();
                v.erase(v.begin());
            }

            dc++;
        }
    }

    cout<<s<<ss<<d<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
