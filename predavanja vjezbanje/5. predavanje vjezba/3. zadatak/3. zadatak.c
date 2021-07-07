//Odredi što će se ispisati na zaslonu računala.
#include <stdio.h>
int main(void)
{
    int suma = 0;
    int i = 0;

    do
    {
        i++;
        suma = suma + i;
        if (suma > 4)
            break;
    } while (i < 5);

    printf("%d", suma);
    return 0;
}