#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float sum = 0, x, y = 0;

    printf("Kolicina brojeva: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Necijeli broj: ");
        scanf("%f", &x);
        sum += x;
        printf("Aritm. sredina: %.2f\n", sum / i);
        printf("Razlika od prethodnog: %.1f\n", fabs(x - y));
        y = x;
    }
    return 0;
}