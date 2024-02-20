#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll q;
    cin>>q;

    if(q == 0)
        cout<<10<<endl;
    else if(q == 1)
        cout<<1<<endl;
    else
    {
        string s;

        for(ll i=9; i>=2; i--)
        {

            while(q%i == 0)
            {
                s.push_back(i+48);
                q /= i;
            }
        }

        if(q != 1)
            cout<<-1<<endl;
        else
        {
            reverse(s.begin(), s.end());
            cout<<s<<endl;
        }
    }

    return 0;
}
