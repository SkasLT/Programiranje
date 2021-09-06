#include <stdio.h>
#define MAXRED 3
#define MAXSTUP 4

int main(void)
{
    float x[MAXRED][MAXSTUP];
    float *px = &x[0][0];

    printf("Unesi vrijednosti polja:\n");
    for (int i = 0; i < MAXRED; i++)
    {
        for (int j = 0; j < MAXSTUP; j++)
        {
            printf("x[%d][%d] = ", i, j);
            scanf("%f", px + MAXSTUP * i + j);
        }
    }

    printf("Ispis ucitanih vrijednosti:\n");
    for (int i = 0; i < MAXRED; i++)
    {
        for (int j = 0; j < MAXSTUP; j++)
            printf("%.2f\t", *(px + MAXSTUP * i + j));
        printf("\n");
    }

    printf("Ispis adresa:\n");
    for (int i = 0; i < MAXRED; i++)
    {
        for (int j = 0; j < MAXSTUP; j++)
            printf("x[%d][%d] --> %p\n", i, j, px + MAXSTUP * i + j);
    }
    return 0;
}