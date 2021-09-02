#include <stdio.h>

int main(void)
{
    int a, b, z;
    float k;
    printf("Unesi a, b:");
    scanf("%d %d", &a, &b);

    zbroji(&z, &k, a, b);
    printf("Zbroj: %d\nKolicnik: %.2f", z, k);
    return 0;
}

void zbroji(int *pz, float *pk, int x, int y)
{
    *pz = x + y;
    *pk = (float)x / y;
}