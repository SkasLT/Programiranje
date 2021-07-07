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
    float cPolje[n];
    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d. racionalni broj: ", i + 1);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((a[i] - trunc(a[i])) >= 0.5)
            printf("%d  ", i);
    }
    return 0;
}