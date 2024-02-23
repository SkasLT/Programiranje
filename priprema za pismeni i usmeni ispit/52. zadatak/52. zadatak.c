#include <stdio.h>
#include <stdio.h>

int main(void)
{
    float x;
    
    printf("Unesi broj: ");
    scanf("%f", &x);

    if (x > 0 && x - trunc(x) == 0)
        printf("Broj je prirodan");
    else if (x < 0 && x - trunc(x) == 0)
        printf("Broj je negativan cijeli");
    else
        printf("Broj je racionalan");
    return 0;
}