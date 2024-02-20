#include <stdio.h>
#include <string.h>

int main()
{
    char input1[20], input2[20], input3[20];

    scanf("%s", input1);
    scanf("%s", input2);
    scanf("%s", input3);

    if(!strcmp(input1, "vertebrado"))
    {
        if(!strcmp(input2, "ave"))
        {
            if(!strcmp(input3, "carnivoro"))
            {
                printf("aguia\n");
            }
            if(!strcmp(input3, "onivoro"))
            {
                printf("pomba\n");
            }
        }
        if(!strcmp(input2, "mamifero"))
        {
            if(!strcmp(input3, "onivoro"))
            {
                printf("homem\n");
            }
            if(!strcmp(input3, "herbivoro"))
            {
                printf("vaca\n");
            }
        }
    }

    if(!strcmp(input1, "invertebrado"))
    {
        if(!strcmp(input2, "inseto"))
        {
            if(!strcmp(input3, "hematofago"))
            {
                printf("pulga\n");
            }
            if(!strcmp(input3, "herbivoro"))
            {
                printf("lagarta\n");
            }
        }
        if(!strcmp(input2, "anelideo"))
        {
            if(!strcmp(input3, "hematofago"))
            {
                printf("sanguessuga\n");
            }
            if(!strcmp(input3, "onivoro"))
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

