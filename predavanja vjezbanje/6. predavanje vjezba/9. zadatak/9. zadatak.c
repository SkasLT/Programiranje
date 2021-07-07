/*
Napiši program u koji će se utipkati prirodni broj n (tipa int) iz intervala [1, 50]. 
Ukoliko je n pogrešno utipkan, korisniku ispisati poruku: „Pogrešan unos. Ponovite unos.“. 
Nakon što korisnik utipka ispravno broj n, u jednodimenzionalno polje učitati n cijelobrojnih elemenata. 
Na zaslonu računala ispisati učitano polje sortirano silazno (od najveće vrijednosti prema najmanjoj vrijednosti).
*/
#include <stdio.h>
#define MAX 50

int main()
{
    int x[MAX];
    int n, min = 0, max = 0;

    do
    {
        printf("Unesi n broj cijelih brojeva: ");
        scanf("%d", &n);
        if (n < 1 && n > 50)
            printf("Pogresan unos, unesite ponovo");
    } while (n < 1 && n > 50);

    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d. broj: ", i + 1);
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] > x[i + 1])
        {
            max = x[i];
            printf("%d\n", max);
        }
        else if (x[i] < x[i + 1])
        {
            min = x[i];
            printf("%d\n", min);
        }
    }
}
