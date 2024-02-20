#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define EPS          1e-9
#define pb           push_back
#define pi           acos(-1.0)
#define Ars          greater<int>()
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define flush        cin.ignore(numeric_limits<streamsize>::max(),'\n');
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long              ll;
typedef double                 dbl;
typedef unsigned long long     ull;

void solve()
{
    int n, t;
    bool flag=0;
    string s;
    cin>>n>>t>>s;

    for(int i=1; i<=t; i++)
    {
        flag = 0;

        for(int j=0; j<n-1; j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j], s[j+1]);
                j++;
                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }

    cout<<s<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
