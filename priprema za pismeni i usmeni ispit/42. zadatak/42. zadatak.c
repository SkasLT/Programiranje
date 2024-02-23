#include <stdio.h>

int main(void)
{
    int ikz;
    
    printf("Unesi indeks kakavoce zraka: ");
    scanf("%d", &ikz);

    if (ikz >= 0 && ikz <= 50)
        printf("Dobra kvaliteta zraka");
    else if (ikz > 50 && ikz <= 100)
        printf("Umjerana kvaliteta zraka");
    else if (ikz > 100 && ikz <= 150)
        printf("Zrak nezdrav za osjetljive grupe");
    else if (ikz > 150 && ikz <= 200)
        printf("Nezdrav zrak");
    else if (ikz > 200 && ikz <= 300)
        printf("Vrlo nezdrav zrak");
    else if (ikz > 300 && ikz <= 500)
        printf("Opasan zrak");
    else
        printf("Pograsan unos");

    return 0;
}