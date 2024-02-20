#include <stdio.h>

int main()
{
    int cnt, val, n, kase=1;

    while(~scanf("%d", &n))
    {
        if(n<0)
            break;

        cnt=0;
        val=1;

        while(val<n)
        {
            val += val;
            cnt++;
        }

        printf("Case %d: %d\n", kase++, cnt);
    }

    return 0;
}



///It works but UVa doesn't accept it.
///#include <stdio.h>
///#include <math.h>
///
///int main()
///{
///    int n, i=1;
///    while(~scanf("%d", &n))
///    {
///        if(n<0)
///            break;
///
///        printf("Case %d: %d\n", i++, (int)ceil(log2(n)));
///    }
///
///    return 0;
///}
