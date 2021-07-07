//Napiši zadani program bez upotrebe skretnice (switch).
#include <stdio.h>

int main(void)
{

    int x = 65;

    switch (x)
    {
    case 'A':
        printf("Izbor A/a");
        break;
    case 'B':
    case 'b':
        printf("Izbor B/b");
        break;
    default:
        printf("Pogreska.");
    }
    return 0;
}