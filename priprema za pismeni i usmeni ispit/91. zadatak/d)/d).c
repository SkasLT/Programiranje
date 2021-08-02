#include <stdio.h>

int main()
{
    int n;
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
    }

    for (int i = 0; i < n; i++)
    {
        if ((i % 2 != 0) && (a[i] >= 4.5) && (a[i] <= 6))
            printf("%.2f  ", a[i]);
    }
    return 0;
}