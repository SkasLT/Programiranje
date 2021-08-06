#include <stdio.h>
#define pi 3.14159

int main(void)
{
    int izbor;
    float a;
    printf("Odaberi sto se racuna:\n1 - opseg kvadrata\n2 - povrsina kvadrata\n3 - duljina dijagonale kvadrata\n4 - oplosje tijela koje nastaje rotacijom kvadrata oko dijagonale\nizbor: ");
    scanf("%d", &izbor);
    printf("Unesi duljinu stranice kvadrata: ");
    scanf("%f", &a);

    switch (izbor)
    {
    case 1:
        printf("Opseg kvadrata: %.3f", 4 * a);
        break;
    case 2:
        printf("Povrsina kvadrata: %.3f", a * a);
        break;
    case 3:
        printf("Duljina dijagonale kvadrata: %.3f", sqrt(2) * a);
        break;
    case 4:
        printf("Oplosje tijela koje nastaje rotacijom kvadrata oko dijagonale: %.3f", a * a * pi);
        break;
    default:
        printf("Pogresan unos");
        return 1;
    }
    return 0;
}