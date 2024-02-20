#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

void solve()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        string s;
        cin>>n>>s;
        x = n;

        for(int i=0; i<n; i++)
        {
            if(s[i] == '8')
            {
                x = i;
                break;
            }
        }



        if(n-x >= 11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
