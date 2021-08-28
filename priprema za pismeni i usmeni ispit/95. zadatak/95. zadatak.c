#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main(void)
{
    int n, counter = 0, skalarni_umnozak = 0, pom_a = 0, pom_b = 0;
    float duljina_1_vektora, duljina_2_vektora;

    do
    {
        printf("Unesi broj elemenata polja: ");
        scanf("%d", &n);

        if (n < 1 || n > MAX)
        {
            counter++;
            if (counter == 3)
                return 1;
            else
                printf("Pogresan unos, unesite ponovo!\n");
        }

    } while (n < 1 || n > MAX);

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        printf("%d. komponenta 1. vektora: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d. komponenta 2. vektora: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        skalarni_umnozak += a[i] * b[i];
        pom_a += pow(a[i], 2);
        pom_b += pow(b[i], 2);
    }

    duljina_1_vektora = sqrt(pom_a);
    duljina_2_vektora = sqrt(pom_b);

    printf("%.2f", acos(skalarni_umnozak / (duljina_1_vektora * duljina_2_vektora)) * (180 / 3.14));
    return 0;
}