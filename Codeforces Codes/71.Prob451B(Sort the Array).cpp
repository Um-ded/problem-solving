#include <bits/stdc++.h>

#define ss           " "
#define end          "\n"
#define pb           push_back
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    wow

    int n, i, x, y, flag=1;
    cin >> n;
    int a[n+5], b[n+5];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b+n);

    for(i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
    {
        cout << "yes\n" << "1 1\n";
        return 0;
    }

    for(i=0; i<n; i++)
    {
        if(a[i] > a[i+1])
        {
            x = i;
            break;
        }
    }

    for(i=x; i<n; i++)
    {
        if(a[i] < a[i+1])
        {
            y = i;
            break;
        }
        else
            y = n-1;
    }

    flag = 1;
    sort(a+x, a+y+1);

    for(i=0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout << "yes\n" << x+1 << ss << y+1 << end;
    else
        cout << "no\n";

    return 0;
}
