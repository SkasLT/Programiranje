/*
Učitati 5 velikih slova te za svako učitano slovo ispisati odgovarajuće malo slovo. 
Nakon što je učitano 5 vrijednosti ispisati poruku „Kraj programa”. Ako se učita znak koji nije veliko slovo prekinuti s učitavanjem 
vrijednosti te potom ispisati poruku: „Kraj programa”.
*/
#include <stdio.h>

int main(void)
{
    char slova[5];
    int i = -1;

    do
    {
        i++;
        printf("Unesi %d. veliko slovo: ", i + 1);
        scanf(" %c", &slova[i]);
    } while ((slova[i] >= 'A' && slova[i] <= 'Z') && i < 4);

    if (slova[i] < 'A' || slova[i] > 'Z')
    {
        printf("Uneseno je malo slovo, kraj programa");
    }
    else
    {
        for (int a = 0; a <= 4; a++)
        {
            printf("%c %c\n", slova[a], slova[a] + 32);
        }
    }
    return 0;
}