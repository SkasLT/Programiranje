#include <stdio.h>
#define PI 3.14159

int main()
{
    float a;
    printf("Unesi duljinu stranice kvadrata: ");
    scanf("%f", &a);
    printf("Opseg upisane kruznice je: %.3f", a * PI);
    return 0;
}