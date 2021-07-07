#include <stdio.h>
#include <time.h>

void Vrijeme(char znak)
{
    time_t sec;
    sec = time(NULL);
    switch (znak)
    {
    case 'g':
        printf("Proslo je %d godina", sec / (365 * 24 * 3600));
        break;

    case 'd':
        printf("Proslo je %d dana", sec / (3600 * 24));
        break;

    case 'h':
        printf("Proslo je %d sati", sec / 3600);
        break;

    case 'm':
        printf("Proslo je %d minuta", sec / 60);
        break;

    case 's':
        printf("Proslo je %d sekundi", sec);
        break;

    case 'x':
        printf("Proslo je %d godina\n", sec / (365 * 24 * 3600));
        printf("Proslo je %d dana\n", sec / (3600 * 24));
        printf("Proslo je %d sati\n", sec / 3600);
        printf("Proslo je %d minuta\n", sec / 60);
        printf("Proslo je %d sekundi", sec);
        break;
    }
}
int main(void)
{
    char znak;
    printf("Utipkaj mjeru vremena proslu od 1.1.1970: ");
    scanf("%c", &znak);
    Vrijeme(znak);
    return 0;
}