#include <stdio.h>
#include <math.h>

int main(void)
{
    float s11, s12, s21, s22, x, y, r1, r2;
    printf("Unesi kordinate 1. kruznice i njen polumjer: ");
    scanf("%f %f %f", &s11, &s12, &r1);
    printf("Unesi kordinate 2. kruznice i njen polumjer: ");
    scanf("%f %f %f", &s21, &s22, &r2);
    printf("Unesi kordinate tocke: ");
    scanf("%f %f", &x, &y);

    if ((pow((x - s11), 2) + pow((y - s12), 2)) <= pow(r1, 2) && (pow((x - s21), 2) + pow((y - s22), 2)) <= pow(r2, 2))
        printf("T je unutar obje kruznice");
    else if ((pow((x - s11), 2) + pow((y - s12), 2)) <= pow(r1, 2))
        printf("T je unutar jedne kruznice");
    else if ((pow((x - s21), 2) + pow((y - s22), 2)) <= pow(r2, 2))
        printf("T je unutar jedne kruznice");
    else
        printf("T nije unutar niti jedne kruznice");
    return 0;
}