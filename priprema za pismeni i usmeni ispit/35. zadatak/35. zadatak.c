#include <stdio.h>

int main(void)
{
    float dobitak, a, b, c;
    printf("Unesi koliko je ukupna nagrada: ");
    scanf("%f", &dobitak);
    printf("Unesi omjere prema kojima se dijeli novac (bez znaka ':'): ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Petar ce dobiti %.2f kuna", dobitak * (b / (a + b + c)));
    return 0;
}