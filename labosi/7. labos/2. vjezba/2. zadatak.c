#include <stdio.h>

int main()
{
    int a[] = {25, 31, 12, -7, 14, 24, 121, -35, 42, 15}, b[10], c[10], bsize = 0, csize = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[bsize] = a[i];
            bsize++;
        }
        else if (a[i] % 5 == 0)
        {
            c[csize] = a[i];
            csize++;
        }
    }
    printf("Originalno polje:\n");
    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);

    printf("Polje sa parnim brojevima:\n");
    for (int i = 0; i < bsize; i++)
        printf("b[%d] = %d\n", i, b[i]);

    printf("Polje sa brojevima dijeljivim sa 5:\n");
    for (int i = 0; i < csize; i++)
        printf("c[%d] = %d\n", i, c[i]);
    return 0;
}
