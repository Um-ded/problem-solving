#include <stdio.h>

double avg(double a, double b, double c, double d)
{
    return (a*2+b*3+c*4+d)/10;
}

double avg2(double e, double x)
{
    return (e+x)/2;
}

int main()
{
    double a, b, c, d, e, x, y;
    scanf(" %lf %lf %lf %lf", &a, &b, &c, &d);
    e = avg(a, b, c, d);
    printf("Media: %.1f\n", e);

    if(e >= 7.0)
        printf("Aluno aprovado.\n");
    else if(e >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf(" %lf", &x);
        printf("Nota do exame: %.1f\n", x);
        y = avg2(e, x);

        if(y >= 5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", y);
    }
    else
        printf("Aluno reprovado.\n");

    return 0;
}
