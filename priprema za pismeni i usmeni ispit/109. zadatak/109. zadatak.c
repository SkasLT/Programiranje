#include <stdio.h>

int main(void)
{
    struct ispit_s
    {
        int mjesec;
        int godina;
    };

    struct ispit_s rok;

    printf("Unesi mjesec roka: ");
    scanf("%d", &rok.mjesec);
    printf("Unesi godinu roka: ");
    scanf("%d", &rok.godina);

    switch (rok.mjesec)
    {
    case 1:
        printf("I. ");
        break;
    case 2:
        printf("II. ");
        break;
    case 3:
        printf("III. ");
        break;
    case 4:
        printf("IV. ");
        break;
    case 5:
        printf("V. ");
        break;
    case 6:
        printf("VI. ");
        break;
    case 7:
        printf("VII. ");
        break;
    case 8:
        printf("VIII. ");
        break;
    case 9:
        printf("IX. ");
        break;
    case 10:
        printf("X. ");
        break;
    case 11:
        printf("XI. ");
        break;
    case 12:
        printf("XII. ");
        break;
    }
    printf("%d", rok.godina);
    return 0;
}