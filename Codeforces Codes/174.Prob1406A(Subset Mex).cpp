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
    int n, sum=0, flag=0;
    cin>>n;
    int arr[101]={0};
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }

    for(int i=0; i<101; i++)
    {
        if(arr[i] == 0 && flag == 0)
        {
            sum += i;
            flag = 1;
        }

        if(arr[i] > 0)
            arr[i]--;
    }

    for(int i=0; i<101; i++)
    {
        if(arr[i] == 0)
        {
            sum += i;
            break;
        }
    }

    cout<<sum<<endl;
}

int main()
{
    wow

    int t=1;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
