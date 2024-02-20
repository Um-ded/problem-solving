#include <stdio.h>

int main()
{
    int number, hours;
    double amount, SALARY;
    scanf("%d", &number);
    scanf("%d", &hours);
    scanf("%lf", &amount);
    SALARY = hours * amount;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, SALARY);
    return 0;
}
