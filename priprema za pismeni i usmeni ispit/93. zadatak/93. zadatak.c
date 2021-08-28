#include <stdio.h>

int main(void)
{
    int a[10] = {25, 31, 12, -7, 14, 24, 121, -35, 42, 15};
    int b[10], c[10], b_counter = 0, c_counter = 0;

    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[b_counter] = a[i];
            b_counter++;
        }
        if (a[i] % 5 == 0)
        {
            c[c_counter] = a[i];
            c_counter++;
        }
    }
    printf("Zadani niz:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\nNiz brojeva djeljivih sa 2:\n");
    for (int i = 0; i < b_counter; i++)
        printf("%d ", b[i]);

    printf("\nNiz brojeva djeljivih sa 5:\n");
    for (int i = 0; i < c_counter; i++)
        printf("%d  ", c[i]);

    return 0;
}