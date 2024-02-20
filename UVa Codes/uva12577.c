#include <stdio.h>
#include <string.h>

int main()
{
    char word[10];
    int i = 0;

    while(scanf("%s", &word) == 1)
    {
        if(!strcmp(word, "*"))
        {
            break;
        }

        if(!strcmp(word, "Hajj"))
        {
            printf("Case %d: Hajj-e-Akbar\n", ++i);
        }
        else if(!strcmp(word, "Umrah"))
        {
            printf("Case %d: Hajj-e-Asghar\n", ++i);
        }
    }
    return 0;
}
