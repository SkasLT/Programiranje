#include <stdio.h>

int main(void)
{
    int TL, KL, X, Y, Z;
    printf("Unesi koliko je trajao let od Zagreba do Beca: ");
    scanf("%d", &TL);

    if (TL < 1 || TL > 12)
        printf("Pogresan unos");
    else
    {
        printf("Unesi koliko je kasnio let od Zagreba do Beca: ");
        scanf("%d", &KL);

        if (KL < 1 || KL > 10)
            printf("Pogresan unos");

        else
        {
            printf("Unesi u koliko sati krece 1. sljedeci let: ");
            scanf("%d", &X);

            if (X < 1 || X > 9)
                printf("Pogresan unos");
            else
            {
                printf("Unesi u koliko sati krece 2. sljedeci let: ");
                scanf("%d", &Y);

                if (Y < X || Y > 15)
                    printf("Pogresan unos");
                else
                {
                    printf("Unesi u koliko sati krece 3. sljedeci let: ");
                    scanf("%d", &Z);

                    if (Z < Y || Z > 23)
                        printf("Pogresan unos");
                    else
                    {
                        if ((TL + KL) <= X)
                            printf("1. sljedeci let");
                        else if ((TL + KL) > X && (TL + KL) <= Y)
                            printf("2. sljedeci let");
                        else if ((TL + KL) > Y && (TL + KL) <= Z)
                            printf("3. sljedeci let");
                    }
                }
            }
        }
    }
    return 0;
}