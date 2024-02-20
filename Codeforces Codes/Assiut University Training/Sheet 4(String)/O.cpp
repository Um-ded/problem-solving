#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, t, i, j;
    char c;
    cin >> n;

    while(n--)
    {
        cin >> c;
        t = c-97;
        arr[t]++;
    }

    for(i=0; i<26; i++)
        for(j=0; j<arr[i]; j++)
            cout << (char)(i+97);

    cout << "\n";
    return 0;
}
