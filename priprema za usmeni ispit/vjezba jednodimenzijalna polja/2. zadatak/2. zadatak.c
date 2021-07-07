#include <stdio.h>

int main(void)
{
    int a[10] = {25, 31, 12, -7, 14, 24, 121, -35, 42, 15};
    int b[10], c[10];
    int b1 = 0, c1 = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[b1] = a[i];
            b1++;
        }
        else if (a[i] % 5 == 0)
        {
            c[c1] = a[i];
            c1++;
        }
    }
    printf("Zadani niz:\n");

    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\nNiz brojeva djeljivih sa 2:\n");
    for (int i = 0; i < b1; i++)
        printf("%d ", b[i]);
        
    printf("\nNiz brojeva djeljivih sa 5:\n");
    for (int i = 0; i < c1; i++)
        printf("%d ", c[i]);
    return 0;
}
