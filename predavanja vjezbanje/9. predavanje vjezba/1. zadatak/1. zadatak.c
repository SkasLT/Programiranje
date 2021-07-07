#include <stdio.h>

void resistanceCombinations(int a, int b, int *pSeriesResistance, float *pParallelResistance){
    *pSeriesResistance = a + b;
    *pParallelResistance = ((a * b) / (float)(a + b));
}

int main()
{
    int r1, r2, SeriesResistance;
    float ParallelResistance;
    printf("Unesi vrijednost 1. otpornika: ");
    scanf("%d", &r1);
    printf("Unesi vrijednost 2. otpornika: ");
    scanf("%d", &r2);
    resistanceCombinations(r1, r2, &SeriesResistance, &ParallelResistance);
    printf("Unesena vrijdnost 1. otpornika: %d\nUnesena vrijednos 2. otpornika: %d\nOtpor serijskog spoja: %d\nOtpor paralelnog spoja: %.2f",r1, r2, SeriesResistance, ParallelResistance);
    return 0;
}