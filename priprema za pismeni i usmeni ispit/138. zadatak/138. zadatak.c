#include <stdio.h>

int Max(int *a, int *b)
{
    if (*a >= *b)
        return *a;
    else
        return *b;
    //return *a * (*a >= *b) + (*b > *a) * *b; big brain
}

int main(void)
{
    int a, b;
    printf("Unesi a,b: ");
    scanf("%d %d", &a, &b);
    printf("%d", Max(&a, &b));
    return 0;
}