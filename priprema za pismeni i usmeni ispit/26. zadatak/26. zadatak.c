#include <stdio.h>

int main(void)
{
    int r, s, k, n;

    printf("Unesi broj redaka kutije: ");
    scanf("%d", &r);
    printf("Unesi broj stupaca kutije: ");
    scanf("%d", &s);
    printf("Unesi broj katova kutije: ");
    scanf("%d", &k);
    printf("Unesi koliko je kolaca Ivica pojeo:  ");
    scanf("%d", &n);
    
    printf("U kutiji je ostanlo %.2f %% kolaca", (1 - n / ((float)r * s * k)) * 100);
    return 0;
}