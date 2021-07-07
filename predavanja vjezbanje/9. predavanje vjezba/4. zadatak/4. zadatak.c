#include <stdio.h>
int main(void)
{
    int i = 10, j = 10, *ip, *jp;
    ip = &i;
    jp = &j;
    *jp -= 2 * *ip + *ip / *jp;
    (*ip)++;
    printf("%d %d %d %d\n", i, j, *ip + 1, *jp - 3);
    printf("%p\n%p\n", ip, jp);
    printf("%p\n%p\n", &ip, &jp);
    return 0;
}