#include <stdio.h>

int main()
{
    int t, x, y;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d %d", &x, &y);

        if (x>3)
        {
            printf("YES\n");
        }
        else if (x == 1)
        {
            if(y == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(y <= 3)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }

    return 0;
}



//#include<stdio.h>
//
//int main()
//{
//    int t;
//    long long x, y;
//    scanf("%d", &t);
//
//    while(t--)
//    {
//        scanf("%lld %lld", &x, &y);
//
//        if(x >= y)
//        {
//            printf("YES\n");
//            continue;
//        }
//
//        if(x%2 == 0)
//        {
//            x = (3*x)/2;
//        }
//
//        if(x == y)
//        {
//            printf("YES\n");
//            continue;
//        }
//
//        if(3*(x-1)/2 <= x)
//        {
//            printf("NO\n");
//            continue;
//        }
//
//        printf("YES\n");
//    }
//
//    return 0;
//}
