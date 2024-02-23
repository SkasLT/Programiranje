#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{

    float hipotenuza;
    float prviKut;
    float drugiKut;
    int minute1;
    int minute2;

    struct trokut_s
    {
        int a;
        int b;
    };

    struct trokut_s t1;

    do
    {
        printf("Unesi katetu a trokuta: ");
        scanf("%d", &t1.a);

        if (t1.a < 0)
            printf("Stranica trokuta nesmije biti negativna! Ponovite unos!\n");
    } while (t1.a < 0);

    do
    {
        printf("Unesi katetu b trokuta: ");
        scanf("%d", &t1.b);

        if (t1.b < 0)
            printf("Stranica trokuta nesmije biti negativna! Ponovite unos!\n");
    } while (t1.b < 0);

    hipotenuza = sqrt(pow(t1.a, 2) + pow(t1.b, 2));

    prviKut = asin(t1.a / hipotenuza) * (180 / PI);
    drugiKut = asin(t1.b / hipotenuza) * (180 / PI);

    minute1 = (prviKut - (int)prviKut) * 60;
    minute2 = (drugiKut - (int)drugiKut) * 60;

    if (prviKut < drugiKut)
        printf("%d st %d minute", (int)prviKut, minute1);
    else
        printf("%d st %d minute", (int)drugiKut, minute2);

    return 0;
}