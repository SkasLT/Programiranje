#include <stdio.h>

int main()
{
    int broj = 0, jedinice = 0, desetice = 0, stotice = 0, tisucice = 0, zbroj = 0;
    printf("Unesi cetveroznamenkasti broj: ");
    scanf("%d", &broj);
    tisucice = broj / 1000;
    stotice = broj / 100 % 10;
    desetice = broj % 100 / 10;
    jedinice = broj % 10;
    zbroj = tisucice + stotice + desetice + jedinice;
    printf("tisucice = %d,\nstotice = %d,\ndesetice = %d,\njedinice = %d,\nzbroj = %d\n", tisucice, stotice, desetice, jedinice, zbroj);
    return 0;
}