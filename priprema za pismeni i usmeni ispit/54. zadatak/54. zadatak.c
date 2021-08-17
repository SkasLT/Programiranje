#include <stdio.h>

int main(void)
{
    int x, jedinice, desetice, stotice;
    printf("Unesi troznamenkasti broj u intervalu od 1 do 500: ");
    scanf("%d", &x);

    if (x >= 1 && x <= 500)
    {
        jedinice = x % 10;
        desetice = x / 10 % 10;
        stotice = x / 100;

        switch (stotice)
        {
        case 1:
            printf("C");
            break;
        case 2:
            printf("CC");
            break;
        case 3:
            printf("CCC");
            break;
        case 4:
            printf("CD");
            break;
        case 5:
            printf("D");
            break;
        }

        switch (desetice)
        {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
        }

        switch (jedinice)
        {
        case 1:
            printf("I");
            break;
        case 2:
            printf("II");
            break;
        case 3:
            printf("III");
            break;
        case 4:
            printf("IV");
            break;
        case 5:
            printf("V");
            break;
        case 6:
            printf("VI");
            break;
        case 7:
            printf("VII");
            break;
        case 8:
            printf("VIII");
            break;
        case 9:
            printf("IX");
            break;
        }
    }
    else
        printf("Pogresan unos");
    return 0;
}
