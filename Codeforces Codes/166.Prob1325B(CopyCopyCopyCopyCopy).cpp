#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, cnt, i;
    cin >>t;

    while(t--)
    {
        cin >> n;
        int arr[n];

        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);

        cnt = 1;
        for(i=1; i<n; i++)
        {
            if(arr[i] != arr[i-1])
                cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
