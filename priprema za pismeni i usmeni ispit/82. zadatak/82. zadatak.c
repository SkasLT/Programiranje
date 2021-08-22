#include <stdio.h>

int main(void)
{
    int predjelo_Tin, glavno_Tin, desert_Tin, predjelo_Edi, glavno_Edi, desert_Edi, rez_Tin = 0, rez_Edi = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Tina za predjelo: ", i + 1);
        scanf("%d", &predjelo_Tin);
        rez_Tin += predjelo_Tin;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Tina za glavno jelo: ", i + 1);
        scanf("%d", &glavno_Tin);
        rez_Tin += glavno_Tin;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Tina za desert: ", i + 1);
        scanf("%d", &desert_Tin);
        rez_Tin += desert_Tin;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Edija za predjelo: ", i + 1);
        scanf("%d", &predjelo_Edi);
        rez_Edi += predjelo_Edi;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Edija za glavno jelo: ", i + 1);
        scanf("%d", &glavno_Edi);
        rez_Edi += glavno_Edi;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Unesi %d. ocjenu Edija za desert: ", i + 1);
        scanf("%d", &desert_Edi);
        rez_Edi += desert_Edi;
    }

    if (rez_Tin > rez_Edi)
        printf("Tin %d", rez_Tin);
    else if (rez_Tin < rez_Edi)
        printf("Edi %d", rez_Edi);
    else
        printf("Nema pobjednika");
    return 0;
}