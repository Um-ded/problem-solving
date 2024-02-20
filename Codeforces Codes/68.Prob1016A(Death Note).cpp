#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long n, m, i, sum=0, t, q=0, k;
    cin >> n >> m;
    vector <long long> v;

    for(i=0; i<n; i++)
    {
        cin >> t;
        sum += t;

        k = (sum/m)-q;
        v.push_back(k);
        q = sum/m;
    }

    for(i=0; i<n; i++)
    {
        cout << v[i] << " \n"[i == n-1];
    }

    return 0;
}
