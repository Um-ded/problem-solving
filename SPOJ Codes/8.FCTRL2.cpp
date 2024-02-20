#include <bits/stdc++.h>

#define endl         "\n"
#define pb           push_back
#define vi           vector<int>
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

vi fact[102];

void factorial()
{
    fact[0].pb(1);

    for(int i=1; i<=100; i++)
    {
        int carry=0;

        for(int j=0; j<fact[i-1].size(); j++)
        {
            int prod = (fact[i-1][j]*i)+carry;
            fact[i].pb(prod%10);
            carry = prod/10;
        }

        while(carry)
        {
            fact[i].pb(carry%10);
            carry /= 10;
        }
    }
}

void solve()
{
    int n;
    cin>>n;

    for(int i=fact[n].size()-1; i>=0; i--)
        cout<<fact[n][i];

    cout<<endl;
}

int main()
{
    noice

    factorial();

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
