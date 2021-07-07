#include <stdio.h>
#include <math.h>

int main()
{
    int n, exp = 0, pom, sum = 0;
    printf("Unesi binarni broj n: ");
    scanf("%d", &n);
    printf("%d(2) = ", n);
    while (n > 0)
    {
        pom = n % 10;
        sum += pom * pow(2, exp);
        exp++;
        n /= 10;
    }
    printf("%d(10)", sum);
    return 0;
}