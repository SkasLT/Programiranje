#include <stdio.h>
#include <math.h>

int main()
{
    int re1, re2, im1, im2, Zre, Zim, Rre, Rim, Ure, Uim;
    float Kre, Kim;

    printf("Unesi realni dio 1. kompleksnog broja: ");
    scanf("%d", &re1);
    printf("Unesi imaginarni dio 1. kompleksnog broja: ");
    scanf("%d", &im1);
    printf("Unesi realni dio 2. kompleksnog broja: ");
    scanf("%d", &re2);
    printf("Unesi imaginarni dio 2. kompleksnog broja: ");
    scanf("%d", &im2);

    Zre = re1 + re2;
    Zim = im1 + im2;
    Rre = re1 - re2;
    Rim = im1 - im2;

    printf("Zbroj: %d + (%d)i\n", Zre, Zim);
    printf("Razlika: %d + (%d)i\n", Rre, Rim);

    Ure = (re1 * re2 - im1 * im2);
    Uim = (im1 * re2 + re1 * im2);

    printf("Umnozak: %d + (%d)i\n", Ure, Uim);

    Kre = (re1 * re2 + im1 * im2) / (pow(re2, 2) + pow(im2, 2));
    Kim = (im1 * re2 - re1 * im2) / (pow(re2, 2) + pow(im2, 2));

    printf("Kvocjent: %.2f + (%.2f)i", Kre, Kim);

    return 0;
}