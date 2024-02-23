#include <stdio.h>

int main()
{
    int N, X, pom;
    
    printf("Unesi broj ostvarenih bodova na ispitu: ");
    scanf("%d", &N);

    if (N < 45)
    {
        pom = 1;
        printf("1\n");
    }
    else if ((N >= 45) && (N < 60))
    {
        pom = 2;
        printf("2\n");
    }
    else if ((N >= 60) && (N < 75))
    {
        pom = 3;
        printf("3\n");
    }
    else if ((N >= 75) && (N < 90))
    {
        pom = 4;
        printf("4\n");
    }
    else if ((N >= 90) && (N <= 100))
    {
        pom = 5;
        printf("5\n");
    }

    printf("Unesi zeljenu ocjenu: ");
    scanf("%d", &X);

    if ((X == 2) && (X > pom))
        printf("Za ocjenu 2 falilo je %d bodova", 45 - N);
    else if ((X == 3) && (X > pom))
        printf("Za ocjenu 3 falilo je %d bodova", 60 - N);
    else if ((X == 4) && (X > pom))
        printf("Za ocjenu 4 falilo je %d bodova", 75 - N);
    else if ((X == 5) && (X > pom))
        printf("Za ocenu 5 falilo je %d bodova", 90 - N);
    else
        printf("JASMINKA");

    return 0;
}