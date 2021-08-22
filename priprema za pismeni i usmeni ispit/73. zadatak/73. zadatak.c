#include <stdio.h>

int main(void)
{
    int pom, ostatak, sum = 0;

    for (int i = 100; i < 1000; i++)
    {
        pom = i;

        while (pom > 0)
        {

            ostatak = pom % 10;
            sum += ostatak * ostatak * ostatak; //zbog nekog razloga ako stavim sum += pow(ostatak, 3); program ne ispisuje 153
            pom /= 10;
        }

        if (sum == i)
            printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}