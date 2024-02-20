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
    int n, m, c1=0, c2=0, c3=0;
    cin >> n;
    int a[n+5]={0}, t1[n+5]={0}, t2[n+5]={0}, t3[n+2]={0};

    for(int i=1, j=1, k=1, l=1; i<=n; i++)
    {
        cin >> a[i];

        if(a[i] == 1)
        {
            c1++;
            t1[j++] = i;
        }
        else if(a[i] == 2)
        {
            c2++;
            t2[k++] = i;
        }
        else
        {
            c3++;
            t3[l++] = i;
        }
    }

    m = min(c1, min(c2, c3));
    cout << m << endl;

    if(m != 0)
        for(int i=1; i<=m; i++)
            cout<<t1[i]<<ss<<t2[i]<<ss<<t3[i]<<endl;
}

int main()
{
    wow

    solve();

    return 0;
}
