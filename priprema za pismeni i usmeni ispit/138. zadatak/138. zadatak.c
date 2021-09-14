#include <stdio.h>

int Max(int *pa, int *pb)
{
    if (*pa >= *pb)
        return *pa;
    else
        return *pb;
    //return *pa * (*pa >= *pb) + (*pb > *pa) * *pb; big brain
}

int main(void)
{
    int a, b;
    printf("Unesi a,b: ");
    scanf("%d %d", &a, &b);
    printf("%d", Max(&a, &b));
    return 0;
}