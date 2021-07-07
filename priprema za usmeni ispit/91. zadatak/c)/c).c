#include <stdio.h>

int main()
{
    int n;
    float suma = 0;
    printf("Unesi broj elemenata: ");
    scanf("%d", &n);

    if (!((n >= 2) && (n <= 5) || (n >= 7) && (n <= 11)))
    {
        printf("Pogresan unos, kraj programa\n");
        return 1;
    }
    float a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d. racionalni broj: ", i + 1);
        scanf("%f", &a[i]);
        suma += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > (suma / n))
            printf("%.2f  ", a[i]);
    }
    return 0;
}