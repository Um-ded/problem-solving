///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*///////////////*///
/// Author : Um_ded ///
///*///////////////*///

///*//////////////////////////////////////////*///
/// "When you want something, all the universe ///
///  conspires in helping you to achieve it."  ///
///              - Paulo Coelho, The Alchemist ///
///*//////////////////////////////////////////*///

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
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int n, q;
        scanf("%d %d", &n, &q);
        vi v(n);

        for(int j=0; j<n; j++)
            scanf("%d", &v[j]);

        printf("Case %d:\n", i);

        for(int j=0; j<q; j++)
        {
            int a, b;
            vi:: iterator c, d;
            scanf("%d %d", &a, &b);
            c = lower_bound(v.begin(), v.end(), a);
            d = upper_bound(v.begin(), v.end(), b);
            printf("%d\n", d-c);
        }
    }

    return 0;
}


///*////////////////////////////////////////////*///
/// "There is only one thing that makes a dream  ///
/// impossible to achieve: the fear of failure." ///
///                - Paulo Coelho, The Alchemist ///
///*////////////////////////////////////////////*///
