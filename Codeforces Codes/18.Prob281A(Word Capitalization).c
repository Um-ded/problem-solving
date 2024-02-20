#include <stdio.h>

int main()
{
    char word[1005];
    scanf("%s", word);

    if(word[0]>=97 && word[0]<=122)
    {
        word[0] -= 32;
    }

    printf("%s\n", word);
    return 0;
}
