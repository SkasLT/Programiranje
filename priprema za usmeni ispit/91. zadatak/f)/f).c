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
    int cPolje[n];

    for (int i = 0; i < n; i++)
    {
        printf("Unesi %d. racionalni broj: ", i + 1);
        scanf("%f", &a[i]);
        cPolje[i] = trunc(a[i]);
    }

    for (int i = 0; i < n; i++)
        printf("cPolje[%d] = %d\n", i, cPolje[i]);

    return 0;
}