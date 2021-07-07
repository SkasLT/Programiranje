#include <stdio.h>
int main(void)
{
    int a11, a12, a21, a22; //elementi matrice A
    int d;                  //vrijednost determinante

    printf("Program racuna vrijednost determinante matrice A drugog reda.\n");
    printf("Utipkajte vrijednosti elemenata matrice (a11, a12, a21 i a22):\n");
    scanf("%d %d %d %d", &a11, &a12, &a21, &a22);

    d = a11 * a22 - a21 * a22;

    printf("Utipkana matrica A je:\n");
    printf("%d\t%d\n%d\t%d\n", a11, a12, a21, a22);
    printf("d = %d", d);

    return 0;
}