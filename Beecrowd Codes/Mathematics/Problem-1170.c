#include <stdio.h>
#include <math.h>

int main()
{
    int n, flag;
    float x;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%f", &x);
        flag = 0;

//        alternative solution
//        while(x > 1)
//        {
//            x /= 2;
//            flag++;
//        }

        flag = ceil(log2(x));
        printf("%d dias\n", flag);
    }

    return 0;
}
