//Odredi kako će izgledati ispis na zaslonu računala. U prazna polja upiši rješenja.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int main(void)
{

    char a[MAX + 1] = "KaKtus!?123";
    int n;
    int br1 = 0, br2 = 0, br3 = 0;

    n = strlen(a);

    for (int i = 0; i < n; i++)
    {
        if (islower(a[i]))
            br1++;
        if (a[i] >= '2' && a[i] <= '8')
            br2++;
        if (a[i] == '!' || a[i] == '?')
            br3++;
    }
    printf("br1 = %d\n", br1);
    printf("br2 = %d\n", br2);
    printf("br3 = %d", br3);

    return 0;
}