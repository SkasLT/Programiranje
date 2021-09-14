#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

int main(void)
{
    int n, counter = 0, skalarni_umnozak = 0, pom_a = 0, pom_b = 0;
    float duljina_1_vektora, duljina_2_vektora;

    int *pn = &n;
    int *pcounter = &counter;
    int *pskalarni_umnozak = &skalarni_umnozak;
    int *ppom_a = &pom_a;
    int *ppom_b = &pom_b;
    float *pduljina_1_vektora = &duljina_1_vektora;
    float *pduljina_2_vektora = &duljina_2_vektora;

    do
    {
        printf("Unesi broj elemenata polja: ");
        scanf("%d", pn);

        if (*pn < 1 || *pn > MAX)
        {
            *pcounter++;
            if (*pcounter == 3)
                return 1;
            else
                printf("Pogresan unos, unesite ponovo!\n");
        }

    } while (*pn < 1 || *pn > MAX);

    int a[n], b[n];
    int *pa = &a[0];
    int *pb = &b[0];

    for (int i = 0; i < n; i++)
    {
        printf("%d. komponenta 1. vektora: ", i + 1);
        scanf("%d", pa + i);
    }

    for (int i = 0; i < *pn; i++)
    {
        printf("%d. komponenta 2. vektora: ", i + 1);
        scanf("%d", pb + i);
    }

    for (int i = 0; i < *pn; i++)
    {
        *pskalarni_umnozak += *(pa + i) * *(pb + i);
        *ppom_a += pow(*(pa + i), 2);
        *ppom_b += pow(*(pb + i), 2);
    }

    *pduljina_1_vektora = sqrt(*ppom_a);
    *pduljina_2_vektora = sqrt(*ppom_b);

    printf("%.2f", acos(*pskalarni_umnozak / (*pduljina_1_vektora * *pduljina_2_vektora)) * (180 / 3.14));
    return 0;
}