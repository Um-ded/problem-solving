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
    int n, cnt=0;
    cin>>n;
    int arr[n][3];

    for(int i=0; i<n; i++)
    {
        int temp=0;

        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];

            if(arr[i][j] == 1)
                temp++;
        }

        if(temp >= 2)
            cnt++;
    }

    cout<<cnt<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
