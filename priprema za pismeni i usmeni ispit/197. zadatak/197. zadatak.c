#include <stdio.h>

int main(void)
{
    FILE *pulaz = fopen("mjerenje.txt", "r");
    if (pulaz == NULL)
    {
        printf("Pogreska prilikom otvaranja datoteke.");
        exit(1);
    }

    float vrijednost[100];
    float *pv = &vrijednost[0];
    int vrijeme[100];
    int i = 0;
    int vrijeme_index;

    while (!feof(pulaz))
    {
        fscanf(pulaz, "%f %d", &vrijednost[i], &vrijeme[i]);
        i++;
    }

    fclose(pulaz);

    float max = vrijednost[0];
    i = 0;
    while (*pv != '\0')
    {
        if (max < *pv)
        {
            max = *pv;
            vrijeme_index = i;
        }
        i++;
        pv++;
    }
    printf("%d", vrijeme[vrijeme_index]);
    return 0;
}