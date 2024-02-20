#include <bits/stdc++.h>

using namespace std;

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define noice        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a, int b)
{
    if(a==0)
        return b;

    return gcd(b%a, a);
}

int main()
{
    noice

    int t;
    cin>>t;

    while(t--)
    {
        string s;
        getline(cin>>ws, s);
        stringstream saif(s);
        int x, mx=0;
        vector<int> v;

        while(saif>>x)
            v.pb(x);

        for(int i=0; i<v.size(); i++)
            for(int j=i+1; j<v.size(); j++)
                mx = max(mx, gcd(v[i], v[j]));

        cout<<mx<<endl;
    }

    return 0;
}
