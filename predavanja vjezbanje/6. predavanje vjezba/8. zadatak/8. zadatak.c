//Odredi konačnu vrijednost varijable s nakon izvođenja sljedećeg programa.
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int x[4] = {5, -2, -1, 3};
    int s = 0;

    for (int i = 0; i < 4; i++)
        s += abs(x[i]);

    printf("%d", s);

    return 0;
}