#include <stdio.h>

int main()
{
    float a;
    int select;

    printf("1 - opseg kvadrata\n");
    printf("2 - povrsina kvadrata\n");
    printf("3 - duljina dijagonale\n");
    printf("Unesi broj: ");
    scanf("%d", &select);
    printf("Unesi stranicu kvadrata: ");
    scanf("%f", &a);

    if (select == 1)
        printf("Opseg je %.3f", 4 * a);
    else if (select == 2)
        printf("Povrsina je: %.3f", a * a);
    else if (select == 3)
        printf("Duljina dijagonale je: %.3f", sqrt(2) * a);
    else
        printf("Pogresan unos.");
    return 0;
}
