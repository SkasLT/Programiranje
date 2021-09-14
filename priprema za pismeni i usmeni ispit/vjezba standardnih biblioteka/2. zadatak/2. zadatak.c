#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t sati, minute, sekunde;
    sekunde = time(NULL);

    minute = sekunde / 60;
    sekunde %= 60;
    sati = minute / 60;
    minute %= 60;

    printf("%li:%li:%li", sati, minute, sekunde); //%li je long int
    return 0;
}