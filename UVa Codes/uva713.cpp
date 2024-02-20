#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string a, b, c;
    cin>>a>>b;
    int sza = a.size();
    int szb = b.size();

    if(sza<szb)
    {
        swap(a, b);
        swap(sza, szb);
    }

    for(int i=0; i<(sza-szb); i++)
        b.push_back('0');

    int carry = 0;

    for(int i=0; i<sza; i++)
    {
        int cur = (a[i]-'0')+(b[i]-'0')+carry;
        carry = cur/10;
        cur %= 10;
        c.push_back(cur+'0');
    }

    if(carry)
        c.push_back(carry+'0');

    reverse(c.begin(), c.end());

    while(c.back()=='0')
        c.pop_back();

    reverse(c.begin(), c.end());
    cout<<c<<"\n";
}

int main()
{
    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
