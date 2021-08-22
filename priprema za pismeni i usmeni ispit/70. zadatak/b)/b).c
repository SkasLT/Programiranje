#include <stdio.h>

int main()
{
    float sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 3)
                continue; //continue radi da loop ode nazad na pocetak. Time se postize da se ne racuna suma kad je i == 3
            sum += (j + 2) / (float)(j - 3);
        }
    }
    printf("%.3f", sum);
    return 0;
}