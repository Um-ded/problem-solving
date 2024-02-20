#include <bits/stdc++.h>

using namespace std;

#define endl    "\n"

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t = 1;
    cin>>t;
    cin.ignore();
    cin.ignore();

    while(t--)
    {
        map<string, int> mp;
        string s;
        int cnt = 0;

        while(getline(cin, s) && !s.empty())
        {
            mp[s]++;
            cnt++;
        }

        for(auto u: mp)
            cout<<u.first<<" "<<fixed<<setprecision(4)<<((100.0*u.second)/cnt)<<endl;

        if(t)
            cout<<endl;
    }

    return 0;
}
