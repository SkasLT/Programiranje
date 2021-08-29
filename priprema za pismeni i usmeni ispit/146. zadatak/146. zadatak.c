#include <stdio.h>

void Sekunde(int *psati, int *pminute, int *psekunde);

int main(void)
{
    int sekunde, minute, sati;
    printf("Unesi sekunde: ");
    scanf("%d", &sekunde);
    Sekunde(&sati, &minute, &sekunde);
    printf("%d sati %d minuta %d sekunda", sati, minute, sekunde);
    return 0;
}

void Sekunde(int *psati, int *pminute, int *psekunde)
{
    *pminute = *psekunde / 60;
    *psekunde %= 60;
    *psati = *pminute / 60;
    *pminute %= 60;
}