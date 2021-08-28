#include <stdio.h>

int main(void)
{
    int suma = 0, counter = 1;
    int a[10] = {0};

    while (suma < 10 || counter == 10)
    {
        printf("Utipkaj %d. broj: ", counter);
        scanf("%d", &a[counter]);
        suma += a[counter];
        printf("Suma: %d\n", suma);
        counter++;
    }
    return 0;
} //ne kuzim kaj ce nam polje u ovom zadatku

//rjesenje bez polja:
/* 
int main(void)
{
    int suma = 0, counter = 0, n;

    while (suma < 10 || counter == 10)
    {
        printf("Utipkaj %d. broj: ", counter + 1);
        scanf("%d", &n);
        suma += n;
        printf("Suma: %d\n", suma);
        counter++;
    }
    return 0;
} 
*/