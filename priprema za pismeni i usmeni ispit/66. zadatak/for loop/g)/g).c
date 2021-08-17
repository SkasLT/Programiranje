#include <stdio.h>

int main(void)
{
    int jedinice, desetice, stotice, tisucice, counter = 0;

    for (int i = 1000; i <= 9000; i++)
    {
        jedinice = i % 10;
        desetice = i / 10 % 10;
        stotice = i / 100 % 10;
        tisucice = i / 1000;

        if ((jedinice % 2 == 1) && ((desetice >= 4) && (desetice < 7)) && (tisucice > stotice))
            counter++;
    }
    printf("%d", counter);
    return 0;
}