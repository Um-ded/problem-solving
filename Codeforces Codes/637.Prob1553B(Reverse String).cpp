#include <bits/stdc++.h>

using namespace std;

#define endl         "\n"
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long    ll;

void solve()
{
    string s, t;
    cin>>s>>t;
    bool ok = false;
    int szs = s.size();
    int szt = t.size();

    for(int i=0; i<szs; i++)
    {
        if(s[i]==t[0])
        {
            int ps=i, pt=0;

            while(pt<szt && ps<szs && s[ps]==t[pt])
            {
                if(szt-pt-1<=ps)
                {
                    int j, k;

                    for(j=ps-1, k=pt+1; k<szt; j--, k++)
                        if(s[j]!=t[k])
                            break;

                    if(k==szt)
                    {
                        ok = true;
                        break;
                    }
                }

                ps++;
                pt++;
            }

            if(ok)
                break;
        }
    }

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    noice

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
