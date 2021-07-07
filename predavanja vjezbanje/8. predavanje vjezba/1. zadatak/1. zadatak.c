#include <stdio.h>

int zbroji(int a, int b)
{
    int suma;
    suma = a + b;
    return suma;
}

float podijeli(int a, int b)
{
    float kolicnik;
    kolicnik = (float)a / b;
    return kolicnik;
}

int main()
{
    int a, b;
    printf("Unesi 2 prirodna broja: ");
    scanf("%d %d", &a, &b);
    printf("Suma: %d\nKolicnik: %.2f", zbroji(a, b), podijeli(a, b));
    return 0;
}