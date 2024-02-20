/// Approach 1

#include <stdio.h>

int main()
{
    int n, i, x, flag = 0;///Have to initialize flag = 0. Otherwise will get wrong answer for some test cases.
    scanf("%d", &n);

    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &x);

        if(x == 1)
        {
            flag = 1;
            ///break;Code also works without break statement
        }
    }

    if(flag == 1)
    {
        printf("Hard");
    }
    else
    {
        printf("Easy");
    }

    return 0;
}



/// Approach 2

//#include <stdio.h>
//
//int main()
//{
//    int n, i, flag = 0;
//    scanf("%d", &n);
//    int ara[n];
//
//    for(i = 0 ; i < n ; i++)
//    {
//        scanf("%d", &ara[i]);
//    }
//
//    for(i = 0 ; i < n ; i++)
//    {
//        if(ara[i] == 1)
//        {
//            flag = 1;
//            break;
//        }
//        else
//        {
//            flag = 0;
//        }
//    }
//
//    if(flag == 1)
//    {
//        printf("HARD");
//    }
//    else
//    {
//        printf("EASY");
//    }
//
//    return 0;
//}
