#include <bits/stdc++.h>

#define SS           " "
#define endl         "\n"
#define pb           push_back
#define pi           acos(-1.0)
#define vi           vector<int>
#define vvi          vector<vector<int> >
#define wow          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long       ll;
typedef double          dbl;

int main()
{
    int t, m, n;
    string s;

    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        vector<string> vec1, vec2;
        set<string> mySet;
        scanf("%d %d", &m, &n);
        getline(cin, s);

        for(int j=1; j<=m; j++)
        {
            getline(cin, s);
            vec1.push_back(s);
        }

        for(int j=1; j<=n; j++)
        {
            getline(cin, s);
            vec2.push_back(s);
        }

        string tmp;
        for(int j=0; j<vec1.size(); j++)
            for(int k=0; k<vec2.size(); k++)
            {
                tmp = vec1[j]+vec2[k];
                mySet.insert(tmp);
            }

        printf("Case %d: %d\n", i, mySet.size());
    }

    return 0;
}
