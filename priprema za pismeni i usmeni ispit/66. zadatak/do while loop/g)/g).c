#include <stdio.h>

int main(void)
{
    int jedinice, desetice, stotice, tisucice, counter = 0, i = 1000;

    do
    {
        jedinice = i % 10;
        desetice = i / 10 % 10;
        stotice = i / 100 % 10;
        tisucice = i / 1000;

        if ((jedinice % 2 == 1) && ((desetice >= 4) && (desetice < 7)) && (tisucice > stotice))
            counter++;
        i++;
    } while (i <= 9000);

    printf("%d", counter);
    return 0;
}