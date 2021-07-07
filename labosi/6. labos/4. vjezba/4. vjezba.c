#include <stdio.h>
#include <math.h>

int main(void)
{

    int x, ocjenaP, ocjenaN;
    float sumaP = 0, sumaN = 0;
    char s;

    printf("Upisi broj studenata: ");
    scanf(" %d", &x);

    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            printf("Unesi ocjenu studenta: ");
            scanf(" %d", ocjenaP);
            sumaP = sumaP + ocjenaP;
        }
        else
        {
            printf("Unesi ocjenu studenta: ");
            scanf(" %d", ocjenaN);
            sumaN = sumaN + ocjenaN;
        }
    }

    printf("%.2f %.2f %c", sumaP / (x / 2), sumaN / (x - (x / 2)), s);

    if (sumaP / (x / 2) > sumaN / (x - (x / 2)))
        printf("P");
    else if (sumaP / (x / 2) < sumaN / (x - (x / 2)))
        printf("N");
    else
        printf("NP");
    return 0;
}