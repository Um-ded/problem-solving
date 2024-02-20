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
    int n, on=0, off=0;
    string s;
    cin>>n>>s;

    if(n&1)
    {
        cout<<1<<endl<<s<<endl;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
                on++;
            else
                off++;
        }

        if(on == off)
        {
            char c = s[n-1];
            s.pop_back();

            cout<<2<<endl;
            cout<<s<<ss<<c<<endl;
        }
        else
            cout<<1<<endl<<s<<endl;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
