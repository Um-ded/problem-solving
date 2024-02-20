#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, sum=0, cnt=0, total=0;
    cin >> n;
    int ara[n];

    for(i=0; i<n; i++)
    {
        cin >> ara[i];
        total += ara[i];
    }

    sort(ara, ara+n);

    while(sum <= (total/2))
    {
        sum += ara[n-1];
        n--;
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
