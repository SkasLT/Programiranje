#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, pom, counter = 0;
    printf("Unesi broj: ");
    scanf("%d", &n);

    if (n - trunc(n) != 0)
        printf("Pogresan unos"); // ne kuzim u zadatku pise samo "U slučaju krivog unosa ispisati poruku" ovo nema smisla jer ako uneses krivi broj zadatak ce samo nastavit s tim brojem i ko zna kaj ces dobit na izlazu

    pom = n;
    while (pom > 0)
    {
        counter++;
        pom /= 10;
    }
    int a[counter];

    for (int i = counter - 1; i >= 0; i--)
    {
        a[i] = n % 10;
        n /= 10;
    }

    for (int i = 0; i < counter; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}