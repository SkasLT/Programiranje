#include <stdio.h>

void Poruka()
{
    printf("Povrsina je: ");
}

float Pi()
{
    return 3.14159;
}

float Povrsina(int r)
{
    return pow(r, 2) * Pi();
}

int main()
{
    int n;

    printf("Utipkaj broj n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        Poruka();
        printf("%f\n", Povrsina(i));
    }
    return 0;
}