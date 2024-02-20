#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, MaxAB, Max;
    scanf("%d %d %d", &a, &b, &c);
    MaxAB = (a + b + abs(a-b))/2;
    Max = (MaxAB + c + abs(MaxAB-c))/2;
    printf("%d eh o maior\n", Max);
    return 0;

}

