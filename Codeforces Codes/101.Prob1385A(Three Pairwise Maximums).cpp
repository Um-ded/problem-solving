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
    int t, arr[3];
    cin >> t;

    while(t--)
    {
        for(int i=0; i<3; i++)
            cin >> arr[i];

        sort(arr, arr+3);

        if(arr[1] == arr[2])
            cout<<"YES\n"<<arr[1]<<ss<<arr[0]<<ss<<arr[0]<<endl;
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
