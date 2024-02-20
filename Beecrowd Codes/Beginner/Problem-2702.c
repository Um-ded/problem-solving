#include <stdio.h>

int main()
{
    int Ca, Ba, Pa, Cr, Br, Pr, shortage = 0;

    scanf("%d %d %d", &Ca, &Ba, &Pa);
    scanf("%d %d %d", &Cr, &Br, &Pr);

    if(Ca<Cr)
    {
        shortage += Cr-Ca;
    }
    if(Ba<Br)
    {
        shortage += Br-Ba;
    }
    if(Pa<Pr)
    {
        shortage += Pr-Pa;
    }

    printf("%d\n", shortage);

    return 0;
}

