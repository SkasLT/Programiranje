#include <stdio.h>

int main()
{
    int n;
    float sum = 0;

    printf("Unesi prirodan broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i == 3)
            continue; //continue radi da loop ode nazad na pocetak. Time se postize da se ne racuna suma kad je i == 3
        sum += (i + 3.5) / (i - 3);
    }
    printf("%.3f", sum);
    return 0;
}