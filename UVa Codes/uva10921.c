///*/////////////////////////////*///
/// IN THE NAME OF ALMIGHTY ALLAH ///
///*/////////////////////////////*///

///*////////////////////*///
/// Author : SAIFULLAH29 ///
///*////////////////////*///

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

#define min(x, y)                 (x<y)?x:y
#define max(x, y)                 (x>y)?x:y
#define pi                        acos(-1.0)
#define swap(x, y)                x^=y^=x^=y

typedef long long                 ll;
typedef double                    dbl;
typedef unsigned long long        ull;

int main()
{
    char ch;

    while(scanf("%c", &ch) != EOF)
    {
        if(ch=='A' || ch=='B' || ch=='C')
            printf("2");
        else if(ch=='D' || ch=='E' || ch=='F')
            printf("3");
        else if(ch=='G' || ch=='H' || ch=='I')
            printf("4");
        else if(ch=='J' || ch=='K' || ch=='L')
            printf("5");
        else if(ch=='M' || ch=='N' || ch=='O')
            printf("6");
        else if(ch=='P' || ch=='Q' || ch=='R' || ch=='S')
            printf("7");
        else if(ch=='T' || ch=='U' || ch=='V')
            printf("8");
        else if(ch=='W' || ch=='X' || ch=='Y' || ch=='Z')
            printf("9");
        else
            printf("%c",ch);
    }

    return 0;
}
