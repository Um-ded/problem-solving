#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, led;
    char num[105];
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", num);
        int l = strlen(num);

        led = 0;
        for(i=0; i<l; i++)
        {
            if(num[i]=='0' || num[i]=='6' || num[i]=='9')
            {
                led += 6;
            }
            else if(num[i]=='1')
            {
                led += 2;
            }
            else if(num[i]=='2' || num[i]=='3' || num[i]=='5')
            {
                led += 5;
            }
            else if(num[i]=='4')
            {
                led += 4;
            }
            else if(num[i]=='7')
            {
                led += 3;
            }
            else if(num[i]=='8')
            {
                led += 7;
            }
        }

        printf("%d leds\n", led);
    }

    return 0;
}
