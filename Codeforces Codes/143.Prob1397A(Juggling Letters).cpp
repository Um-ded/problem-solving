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
    int n;
    cin>>n;
    string s[n];
    int arr[28]= {0};

    for(int i=0; i<n; i++)
        cin>>s[i];

    for(int i=0; i<n; i++)
        for(int j=0; j<s[i].size(); j++)
            arr[s[i][j]-97]++;

    for(int i=0; i<26; i++)
    {
        if(arr[i]%n == 0)
            continue;
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
}

int main()
{
    wow

    int t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
