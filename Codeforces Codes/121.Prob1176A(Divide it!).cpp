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
    int q;
    cin>>q;

    while(q--)
    {
        int cnt=0;
        bool flag=0;
        ll n;
        cin>>n;

        while(n > 1)
        {
            if(n%2 == 0)
                n /= 2;
            else if(n%3 == 0)
				n = (2*n)/3;
			else if(n%5 == 0)
				n = (4*n)/5;
            else
            {
                flag = 1;
                break;
            }

            cnt++;
        }

        if(flag)
            cout<<-1<<endl;
        else
            cout<<cnt<<endl;
    }
}

int main()
{
    wow

    solve();

    return 0;
}
