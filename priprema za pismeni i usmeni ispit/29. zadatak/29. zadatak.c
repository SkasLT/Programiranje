#include <stdio.h>

int main(void)
{
    float duljina, prviDio, drugiDio, treciDio;

    printf("Unesi duljinu stapa: ");
    scanf("%f", &duljina);
    printf("Unesi omjere duljina (bez dvotocke sa razmacima): ");
    scanf("%f %f %f", &prviDio, &drugiDio, &treciDio);
    printf("Prvi dio: %.3f\n", duljina * (prviDio / (prviDio + drugiDio + treciDio)));
    printf("Drugio dio: %.3f\n", duljina * (drugiDio / (prviDio + drugiDio + treciDio)));
    printf("Treci dio: %.3f\n", duljina * (treciDio / (prviDio + drugiDio + treciDio)));
    return 0;
}