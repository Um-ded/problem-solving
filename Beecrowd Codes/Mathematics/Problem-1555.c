#include <stdio.h>
#include <math.h>

int main()
{

    int n, x, y, rafa, beto, carl;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d", &x, &y);

        rafa = pow(3*x, 2)+pow(y, 2);
        beto = (2*pow(x, 2))+pow(5*y, 2);
        carl = (-100*x)+pow(y, 3);

        if(rafa>beto && rafa>carl)
        {
            printf("Rafael ganhou\n");
        }
        else if(beto>rafa && beto>carl)
        {
            printf("Beto ganhou\n");
        }
        else if(carl>beto && rafa<carl)
        {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}
