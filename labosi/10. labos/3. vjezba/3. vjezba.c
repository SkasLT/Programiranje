#include <stdio.h>

void trokut(float a, float b, float c, float *popseg, float *ppovrsina)
{
    *popseg = a + b + c;
    *ppovrsina = a * b * sqrt(1 - pow((pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b), 2)) / 2;
}

int main()
{
    float a, b, c, opseg, povrsina;

    printf("Unesi stranice trokuta: ");
    scanf("%f %f %f", &a, &b, &c);

    trokut(a, b, c, &opseg, &povrsina);
    printf("Opseg je: %.3f\n", opseg);
    printf("Povrsina je: %.3f", povrsina);
}
