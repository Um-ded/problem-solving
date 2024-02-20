#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    vector <int> v;
    cin >> t;

    while(t--)
    {
        int n, x, flag=0;
        cin >> n;
        v.clear();

        for(int i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }

        for(int i=1; i<n-1; i++)
        {
            if(v[i-1]<v[i] && v[i]>v[i+1])
            {
                cout << "YES\n" << i << " " << i+1 << " " << i+2 << endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "NO\n";
    }

    return 0;
}
