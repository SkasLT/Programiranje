#include <stdio.h>
#include <math.h>

void Poruka(void)
{
    printf("Povrsina je: ");
}

float Pi(void)
{
    return 3.14159;
}

float Povrsina(float r)
{
    float P;
    P = pow(r, 2) * Pi();
    return P;
}

int main(void)
{
    float polumjer;
    int n;

    printf("Unesi broj izracuna: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Unesi polumjer kruznice: ");
        scanf("%f", &polumjer);
        Poruka();
        printf("%.2f\n", Povrsina(polumjer));
    }
    return 0;
}