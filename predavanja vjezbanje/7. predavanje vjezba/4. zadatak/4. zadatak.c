#include <stdio.h>

int main(void)
{
    struct ducan_s
    {
        char a[15 + 1]; //naziv proizvoda
        int x;          //količina u kg
        float y;        //cijena za 1 kg
    } z[4];

    int i;
    float s = 0; //početan iznos računa

    for (i = 0; i < 4; i++)
    {
        scanf("%s", z[i].a); //učitavanje podataka
        scanf("%d", &z[i].x);
        scanf("%f", &z[i].y);
    }

    for (i = 0; i < 4; i++)
    {
        if (z[i].y >= 10.5 && z[i].y <= 15.5)
        {
            s += z[i].x * z[i].y;
            printf("%c %d\n", z[i].a[0], z[i].x);
        }
    }
    printf("Suma: %.2f", s);
    return 0;
}