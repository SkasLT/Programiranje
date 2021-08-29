#include <stdio.h>

void red1(int n, float *rez1)
{
    for (int i = 0; i < n; i++)
        *rez1 += (i + 1) / (float)(3 + 2 * i);
}

void red2(int m, float *rez2)
{
    for (int i = 0; i < m; i++)
        *rez2 += (2 + 10 * i) / (float)(5 + 3 * i);
}

int main(void)
{
    int m, n;
    float rez1 = 0, rez2 = 0;
    printf("Unesi m, n: ");
    scanf("%d %d", &n, &m);
    red1(n, &rez1);
    red2(m, &rez2);
    printf("Zbroj 1. reda: %.3f\nZbroj 2. reda: %.3f", rez1, rez2);
    return 0;
}