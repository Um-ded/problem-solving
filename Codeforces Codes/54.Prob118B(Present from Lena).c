#include <stdio.h>

int main()
{
    int i, j, n;
    scanf(" %d", &n);

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=n-i-1; j++)
        {
            printf("  ");
        }

        for(j=0; j<=i; j++)
        {
            if(i == 0)
                printf("0\n");
            else
                printf("%d ", j);
        }

        for(j=0; j<i; j++)
        {
            printf("%d%c", i-j-1, " \n"[j == i-1]);
        }
    }

    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<=n-i-1; j++)
        {
            printf("  ");
        }

        for(j=0; j<=i; j++)
        {
            if(i == 0)
                printf("0\n");
            else
                printf("%d ", j);
        }

        for(j=0; j<i; j++)
        {
            printf("%d%c", i-j-1, " \n"[j == i-1]);
        }
    }

    return 0;
}



///Fahad's solution
//#include<stdio.h>
//
//int main()
//{
//    int i, j, k, m, n;
//    scanf(" %d", &n);
//
//    for(i=0; i<=n; i++)
//    {
//        for(j=2*(n-i); j>0; j--)
//            printf(" ");
//
//        if(i>0)
//            printf("0 ");
//
//        for(k=1; k<=i; k++)
//            printf("%d ", k);
//
//        for(m=i-1; m>0; m--)
//            printf("%d ", m);
//
//        printf("0\n");
//    }
//
//    for(i=n-1; i>=0; i--)
//    {
//        for(j=1; j<=(2*(n-i)); j++)
//            printf(" ");
//
//        if(i>0)
//            printf("0 ");
//
//        for(k=1; k<=i; k++)
//            printf("%d ", k);
//
//        for(m=i-1; m>0; m--)
//            printf("%d ", m);
//
//        printf("0\n");
//    }
//
//    return 0;
//}
