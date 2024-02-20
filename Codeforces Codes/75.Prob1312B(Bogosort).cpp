#include <bits/stdc++.h>

#define ss           " "
#define endl         "\n"
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

    int t, n, x;
    vector <int> vec;
    vector <int> :: iterator it;
    cin >> t;

    while(t--)
    {
        cin >> n;

        vec.clear();
        while(n--)
        {

            cin >> x;
            vec.push_back(x);
        }

        sort(vec.rbegin(), vec.rend());

        for(it=vec.begin(); it!=vec.end(); it++)
        {
            cout << *it << " \n"[it == vec.end()-1];
        }
    }

    return 0;
}
