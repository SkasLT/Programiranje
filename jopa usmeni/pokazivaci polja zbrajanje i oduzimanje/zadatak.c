#include <stdio.h>
#define MAX 10

void zbroji(int *ppolje, int n, int *pzbroj);
void oduzmi(int *ppolje, int n, int *prazlika);

int main(void)
{
    int polje[MAX];
    int *ppolje = &polje[0];
    int n, i;
    int zbroj = 0;
    int razlika = polje[0];

    printf("Unesi broj elemenata polja manje od 10: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Unesi %d element polja: ", i + 1);
        scanf("%d", ppolje + i);
    }

    zbroji(&polje[0], n, &zbroj);
    oduzmi(&polje[0], n, &razlika);

    printf("Zbroj: %d\nRazlika: %d", zbroj, razlika);

    return 0;
}

void zbroji(int *ppolje, int n, int *pzbroj)
{
    int i;

    for (i = 0; i < n; i++)
        *pzbroj = *pzbroj + *(ppolje + i);
}

void oduzmi(int *ppolje, int n, int *prazlika)
{
    int i;

    for (i = 1; i < n; i++)
        *prazlika = *prazlika - *(ppolje + 1);
}