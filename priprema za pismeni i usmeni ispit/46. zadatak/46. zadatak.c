#include <stdio.h>

int main(void)
{
    char odabir;
    float a, b, v;
    printf("Odaberi izracun:\nO ili o  opseg pravokutnika\nP ili p  povrsina romba\nIzbor: ");
    scanf("%c", &odabir);

    if (odabir == 'O' || odabir == 'o')
    {
        printf("Unesi stranice a i b: ");
        scanf("%f %f", &a, &b);
        printf("opseg pravokutnika: %.3f", 2 * (a + b));
    }
    else if (odabir == 'P' || odabir == 'p')
    {
        printf("Unesi osnovicu a i visinu v: ");
        scanf("%f %f", &a, &v);
        printf("Povrsina romba: %.3f", a * v);
    }
    else
    {
        printf("Pograsan unos");
        return 1;
    }
    return 0;
}