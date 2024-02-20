#include <stdio.h>

int main()
{
    char name[100];
    double salary, sale, TOTAL;
    scanf("%[^\n]", name); ///WE CAN ALSO USE gets() instead of scanf()
    scanf("%lf", &salary);
    scanf("%lf", &sale);
    TOTAL = salary + sale * 15 / 100;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}
