#include <stdio.h>

int main(void)
{
    int C, F;

    printf("Unesi temperaturu u C: ");
    scanf("%d", &C);
    printf("Unesi temperaturu u F: ");
    scanf("%d", &F);

    printf("Razlika u temperatura u F: %.1f", F - (C * 1.8 + 32));

    return 0;
}