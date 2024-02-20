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
    int n, i, j;
    bool flag=0;
    string sip, sop;
    cin >> n >> sip;

    for(i=0; i<sip.size(); i++)
    {
        if(sip[i] == '0')
            sop += '0';
        else
            break;
    }

    for(i++; i<sip.size(); i++)
    {
        if(sip[i] == '0' && sip[i-1] == '1')
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        sop += '0';

    for(j=sip.size()-1; j>=0; j--)
    {
        if(sip[j] == '0')
            break;

        sop += '1';
    }

    cout << sop << endl;
}

int main()
{
    wow

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
