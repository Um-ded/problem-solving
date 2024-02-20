///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++)
    {
        int x, y, z, ans;
        scanf("%d %d", &x, &y);
        z = x*y;

        if(x==1 || y==1)
            ans = z;
        else if(x==2 || y==2)
        {
            int temp;

            if(x==2)
               temp = y;
            else
                temp = x;

            if(temp%4==1)
                ans = temp+1;
            else if(temp%4==2)
                ans = temp+2;
            else if(temp%4==3)
                ans = temp+1;
            else
                ans = temp;
        }
        else if(z&1)
            ans = (z/2)+1;
        else
            ans = z/2;

        printf("Case %d: %d\n", i, ans);
    }

    return 0;
}
