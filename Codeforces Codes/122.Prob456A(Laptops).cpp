#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int n, mx;
    bool flag=0;
    vector <pair<int, int> > v;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());
    mx = v[0].second;

    for(int i=1; i<n; i++)
    {
        if(v[i].second < mx)
        {
            flag = 1;
            break;
        }

        mx = max(mx, v[i].second);
    }

    if(flag)
        cout<<"Happy Alex"<<endl;
    else
        cout<<"Poor Alex"<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
